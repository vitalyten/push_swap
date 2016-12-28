/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:22:27 by vtenigin          #+#    #+#             */
/*   Updated: 2016/12/27 21:30:07 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // delete
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

int		isdup(long long l, t_env *env)
{
	int i;

	i = 0;
	while (i < env->lena)
		if (l == (long long)env->a[i++])
			return (1);
	return (0);
}

void	readinput(char **av, t_env *env)
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
	t_env env;
	int	i;

	readinput(av, &env);
	i = 0;
	while (i < env.lena)
		printf("%d\n", env.a[i++]);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		showerr();
	push_swap(av + 1);
	return (0);
}
