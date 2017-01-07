/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 21:42:26 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/06 16:56:57 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // delete

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

void	dispstack(t_en *env)
{
	int	i;

	i = 0;
	while (i < env->lena || i < env->lenb)
	{
		if (i < env->lena)
			ft_printf("%6d%%", env->a[i]);
		else
			ft_printf("      ");
		if (i < env->lenb)
			ft_printf("%6d%%", env->b[i]);
		ft_printf("\n");
		i++;
	}
	ft_printf("\n");
}

void	push_swap(char **av)
{
	t_en env;
	char str[10];

	readinput(av, &env);
	dispstack(&env);
	while (1)
	{
		scanf("%s", str);
		if (!ft_strcmp(str, "pa"))
			pa(&env);
		if (!ft_strcmp(str, "pb"))
			pb(&env);
		if (!ft_strcmp(str, "sa"))
			sa(&env);
		if (!ft_strcmp(str, "sb"))
			sb(&env);
		if (!ft_strcmp(str, "ss"))
			ss(&env);
		if (!ft_strcmp(str, "ra"))
			ra(&env);
		if (!ft_strcmp(str, "rb"))
			rb(&env);
		if (!ft_strcmp(str, "rr"))
			rr(&env);
		if (!ft_strcmp(str, "rra"))
			rra(&env);
		if (!ft_strcmp(str, "rrb"))
			rrb(&env);
		if (!ft_strcmp(str, "rrr"))
			rrr(&env);
		dispstack(&env);
	}
}
























