/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readinput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 17:22:14 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 19:28:47 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		issort(t_en *env)
{
	int i;

	i = -1;
	if (env->lenb == 0)
	{
		while (++i < env->lena - 1)
			if (env->a[i] > env->a[i + 1])
				return (0);
		return (1);
	}
	else
		return (0);
}

int		isop(char *str)
{
	if (ft_strlen(str) > 0)
	{
		if (!ft_strcmp(str, "pa") ||
			!ft_strcmp(str, "pb") ||
			!ft_strcmp(str, "sa") ||
			!ft_strcmp(str, "sb") ||
			!ft_strcmp(str, "ss") ||
			!ft_strcmp(str, "ra") ||
			!ft_strcmp(str, "rb") ||
			!ft_strcmp(str, "rr") ||
			!ft_strcmp(str, "rra") ||
			!ft_strcmp(str, "rrb") ||
			!ft_strcmp(str, "rrr"))
			return (1);
		else
			showerr();
	}
	return (0);
}

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
