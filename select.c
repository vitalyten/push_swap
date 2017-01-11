/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 19:52:00 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 20:09:59 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	select_sort(t_en *env)
{
	int	imin;

	while (env->lena > 3)
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
	if (env->lena > 1)
		if (env->a[0] > env->a[1])
			sa(env, 1);
	if (env->lena == 3)
	{
		if (env->a[2] < env->a[1])
			rra(env, 1);
		if (env->a[0] > env->a[1])
			sa(env, 1);
	}
	while (env->lenb > 0)
		pa(env, 1);
}
