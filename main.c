/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:22:27 by vtenigin          #+#    #+#             */
/*   Updated: 2016/12/27 22:03:58 by vtenigin         ###   ########.fr       */
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



int		main(int ac, char **av)
{
	if (ac == 1)
		showerr();
	push_swap(av + 1);
	return (0);
}
