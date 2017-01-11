/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readperif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 19:22:53 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 19:28:31 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		showerr(void)
{
	write(2, "Error\n", 6);
	exit(-1);
}

void		dispstack(t_en *env)
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

int			ft_isnumber(char *n)
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
