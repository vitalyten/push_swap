/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 21:42:26 by vtenigin          #+#    #+#             */
/*   Updated: 2016/12/27 22:11:00 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		isdup(long long l, t_en *env)
{
	int i;

	i = 0;
	while (i < env->lena)
		if (l == (long long)env->a[i++])
			return (1);
	return (0);
}

void	readinput(char **av, t_en *env)
{
	long long	l;

	env->lena = 0;
	env->lenb = 0;
	while (av[env->lena])
		if (!ft_isnumber(av[env->lena++]))
			showerr();
	env->a = (int *)malloc(sizeof(int) * env->lena);
	env->b = (int *)malloc(sizeof(int) * env->lena);
	env->lena = 0;
	while (av[env->lena])
	{
		l = ft_atoll(av[env->lena]);
		if (l > 2147483647 || l < -2147483648 || isdup(l, env))
			showerr();
		else
			env->a[env->lena++] = (int)l;
	}
}

void	push_swap(char **av)
{
	t_en env;
	int	i;

	readinput(av, &env);
	i = 0;
	while (i < env.lena)
		ft_printf("%d\n", env.a[i++]);
}
