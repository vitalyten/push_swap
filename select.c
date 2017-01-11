/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 19:52:00 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 18:49:52 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		select_sort(t_en *env)
{
	int	imin;

	while (env->lena > 2)
	{
		imin = findmin(env->lena, env->a);
		if (imin <= env->lena / 2)
			while (imin--)
				ra(env, 1);
		else
			while (imin++ < env->lena)
				rra(env, 1);
		pb(env, 1);
	}
	if (env->lena == 2)
		if (env->a[0] > env->a[1])
			sa(env, 1);
	while (env->lenb > 0)
		pa(env, 1);
	return (0);
}
