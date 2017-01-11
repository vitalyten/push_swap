/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 21:42:26 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 18:53:29 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	findminrot(t_en *env)
{
	int		i;
	int		j;
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
			j = -1;
			while (++j < 4)
				free(ops[j]);
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
	}
	findminrot(env);
	while (env->lenb > 0)
		pa(env, 1);
	imin = findmin(env->lena, env->a);
	if (imin <= env->lena / 2)
		while (imin--)
			ra(env, 1);
	else
		while (imin++ < env->lena)
			rra(env, 1);
	return (0);
}

void	push_swap(char **av)
{
	t_en env;

	readinput(av, &env);
	if (issort(&env))
		exit(1);
	sort(&env);
	free(env.a);
	free(env.b);
}

int		main(int ac, char **av)
{
	char	**arg;
	int		i;

	if (ac == 1)
		exit(-1);
	if (ac == 2)
	{
		arg = ft_strsplit(av[1], ' ');
		push_swap(arg);
		i = -1;
		while (arg[++i])
			free(arg[i]);
		free(arg);
	}
	else
		push_swap(av + 1);
	return (0);
}
