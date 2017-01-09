/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 19:52:00 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/08 16:14:30 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int		select_sort(t_en *env)
{
	int	imin;

	while (env->lena > 2)
	{
		imin = findmin(env->lena, env->a);
		// ft_printf("min = %d\n", env->a[imin]);
		if (imin <= env->lena / 2)
			while (imin--)
				ra(env);
		else
			while (imin++ < env->lena)
				rra(env);
		pb(env);
	}
	// ft_printf("a0 = %d a1 = %d\n", env->a[0], env->a[1]);
	if (env->lena == 2)
		if(env->a[0] > env->a[1])
			sa(env);
	while (env->lenb > 0)
		pa(env);
	return (0); //
}
