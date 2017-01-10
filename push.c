/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:37:22 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/08 20:22:53 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
pa : push a - take the first element at the top of b and put it at the top of a.
				Do nothing if b is empty.
pb : push b - take the first element at the top of a and put it at the top of b.
				Do nothing if a is empty.
*/

void	pa(t_en *env, int disp)
{
	int	i;

	if (env->lenb > 0)
	{
		i = env->lena + 1;
		while (--i)
			env->a[i] = env->a[i - 1];
		env->a[0] = env->b[0];
		++env->lena;
		i = -1;
		while (++i < env->lenb - 1)
			env->b[i] = env->b[i + 1];
		--env->lenb;
		if (disp)
			ft_printf("pa\n");
	}
}

void	pb(t_en *env, int disp)
{
	int	i;

	if (env->lena > 0)
	{
		i = env->lenb + 1;
		while (--i)
			env->b[i] = env->b[i - 1];
		env->b[0] = env->a[0];
		++env->lenb;
		i = -1;
		while (++i < env->lena - 1)
			env->a[i] = env->a[i + 1];
		--env->lena;
		if (disp)
			ft_printf("pb\n");
	}
}
