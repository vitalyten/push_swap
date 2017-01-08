/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readinput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 17:22:14 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/07 17:39:46 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	showerr(void)
{
	write(2, "Error\n", 6);
	// if (c)
	// {
	// 	free(env->a);
	// 	free(env->b);
	// }
	exit(-1);
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

long long	ft_atoll(const char *str)
{
	long long	res;
	long long	sign;

	res = 0;
	sign = 1;
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sign * res);
}

int		ft_isnumber(char *n)
{
	int i;

	i = 0;
	if (n[0] == '-' || n[0] == '+')
			i++;
	while (n[i])
		if (!ft_isdigit(n[i++]))
			return (0);
	return (1);
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

void	dispstack(t_en *env)
{
	int	i;

	i = 0;
	while (i < env->lena || i < env->lenb)
	{
		if (i < env->lena)
			ft_printf("%6d", env->a[i]);
		else
			ft_printf("      ");
		if (i < env->lenb)
			ft_printf("%6d", env->b[i]);
		ft_printf("\n");
		i++;
	}
	ft_printf("\n");
}