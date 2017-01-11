/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 14:52:07 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/11 14:03:55 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	runop(t_ops *op, t_en *env)
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

t_ops	*execop(t_ops *ops[])
{
	int		i;
	t_ops	*ex;

	i = 0;
	ex = ops[0];
	while (++i < 4)
		if (ops[i]->len < ex->len)
			ex = ops[i];
	return (opscopy(ex));
}

t_ops	*opscopy(t_ops *ops)
{
	t_ops *new;

	new = (t_ops *)malloc(sizeof(t_ops));
	new->nra = ops->nra;
	new->nrb = ops->nrb;
	new->nrr = ops->nrr;
	new->nrra = ops->nrra;
	new->nrrb = ops->nrrb;
	new->nrrr = ops->nrrr;
	new->len = ops->len;
	return (new);
}

void	bestop(t_ops **list, t_en *env)
{
	t_ops	*best;
	int		i;

	i = 0;
	best = list[0];
	while (++i < env->lena)
		if (list[i]->len < best->len)
			best = list[i];
	runop(best, env);
	i = -1;
	while (++i <= env->lena)
		free(list[i]);
	free(list);
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
