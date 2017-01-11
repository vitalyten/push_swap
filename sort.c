/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 14:52:07 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 16:40:05 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 27 25 23 21 19 45 43 41 39 37 35 33 28 26 24 22 20 10 46 42 36 30
   33 35 37 39 41 43 45 19 21 23 25 27 28 26 24 22 20 10 46 42 36 30
   19 21 23 25 27 33 35 37 39 41 43 45 28 26 24 22 20 10 46 42 36 30


    28    27
    26    25
    24    23
    22    21
    20    19
    10    45
    46    43
    42    41
    36    39
    30    37
          35
          33

n = 28 pos = 0
n = 26 pos = 1
n = 24 pos = 2
n = 22 pos = 3
n = 20 pos = 4
n = 10 pos = 5
n = 46 pos = 5
n = 42 pos = 7
n = 36 pos = 10
n = 30 pos = 0







    28    45
    26    43
    24    41
    22    39
    20    37
    10    35
    46    33
    42    27
    36    25
    30    23
          21
          19

n = 28 pos = 7
n = 26 pos = 8
n = 24 pos = 9
n = 22 pos = 10
n = 20 pos = 11
n = 10 pos = 0
n = 46 pos = 0
n = 42 pos = 2
n = 36 pos = 5
n = 30 pos = 7

		nra = i;
		nrra = env->lena - i;
		nrb = findposb(env, i);
		nrrb = env->lenb - findposb(env, i);
		nrr = psmin(nra, nrb);
		nrrr = psmin(nrra, nrrb);
		upup = nrr + nra - nrr + nrb - nrr;
		dwndwn = nrrr + nrra - nrrr + nrrb - nrrr;
		updwn = nra + nrrb;
		dwnup = nrra + nrb;

void	pushall(t_en *env)
{
	while (env->lena > 10)
		pb(env, 0);
}
up  up
dwn dwn
up  dwn
dwn up
*/

int	psmin(int a, int b)
{
	return ((a < b) ? a : b);
}

int	psmax(int a, int b)
{
	return ((a > b) ? a : b);
}

void runop(t_ops *op, t_en *env)
{
	int i;

	i = -1;
	while (++i < op->nra)
		ra(env, 1);
	i = -1;
	while (++i < op->nrb)
		rb(env, 1);
	i = -1;
	while (++i < op->nrr)
		rr(env, 1);
	i = -1;
	while (++i < op->nrra)
		rra(env, 1);
	i = -1;
	while (++i < op->nrrb)
		rrb(env, 1);
	i = -1;
	while (++i < op->nrrr)
		rrr(env, 1);
	pb(env, 1);
}

t_ops	*execop(t_ops *ops[])//, t_en *env)
{
	int	i;
	t_ops *ex;

	i = 0;
	ex = ops[0];
	while (++i < 4)
		if (ops[i]->len < ex->len)
			ex = ops[i];
	// runop(ex, env);
	return (ex);
}

void	bestop(t_ops **list, t_en *env)
{
	t_ops *best;
	int i;

	i = 0;
	best = list[0];
	while (++i < env->lena)
		if (list[i]->len < best->len)
			best = list[i];
	runop(best, env);
}

void	findminrot(t_en *env)
{
	int		i;
	t_ops	**list;
	t_ops	*ops[4];

	while (env->lena > 0)
	{
		i = -1;
		list = (t_ops **)malloc(sizeof(t_ops *) * env->lena);
		while (++i < env->lena)
		{
			ops[0] = filluu(env, i);
			ops[1] = filldd(env, i);
			ops[2] = fillud(env, i);
			ops[3] = filldu(env, i);
			list[i] = execop(ops);
		}
		bestop(list, env);
	}
}

int		sort(t_en *env)
{
	int	imin;

	if (env->lena > 2)
	{
		pb(env, 1);
		pb(env, 1);
		// if (env->b[0] < env->b[1])
		// 	sb(env, 1);
	}
	// while (env->lena > 0)
	// {
	findminrot(env);
		// dispstack(env);
	// }
	while (env->lenb > 0)
		pa(env, 1);
	imin = findmin(env->lena, env->a);
	// ft_printf("min = %d\n", env->a[imin]);
	if (imin <= env->lena / 2)
		while (imin--)
			ra(env, 1);
	else
		while (imin++ < env->lena)
			rra(env, 1);
	return (0);
}

int		findposb(t_en *env, int j)
{
	int	i;

	i = 0;
	while (env->b[i] > env->a[j] && i < env->lenb)
		i++;
	if (i == env->lenb)
		return (findmax(env->lenb, env->b));
	if (i == 0)
	{
		i = findmax(env->lenb, env->b);
		while (env->b[i] > env->a[j] && i < env->lenb)
			i++;
		if (i == env->lenb)
			return (0);
	}
	return (i);
}

int		findmax(int len, int *arr)
{
	int	max;
	int	imax;
	int	i;

	max	= arr[0];
	i = 0;
	imax = 0;
	while (++i < len)
		if (arr[i] > max)
		{
			max = arr[i];
			imax = i;
		}
	return (imax);
}

int		findmin(int len, int *arr)
{
	int	min;
	int	imin;
	int	i;

	min	= arr[0];
	i = 0;
	imin = 0;
	while (++i < len)
		if (arr[i] < min)
		{
			min = arr[i];
			imin = i;
		}
	return (imin);
}