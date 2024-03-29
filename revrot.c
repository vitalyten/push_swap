/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:10:59 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 18:50:49 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_en *env, int disp)
{
	int	i;
	int	tmp;

	if (env->lena > 1)
	{
		i = env->lena;
		tmp = env->a[i - 1];
		while (--i)
			env->a[i] = env->a[i - 1];
		env->a[i] = tmp;
		if (disp)
			ft_printf("rra\n");
	}
}

void	rrb(t_en *env, int disp)
{
	int	i;
	int	tmp;

	if (env->lenb > 1)
	{
		i = env->lenb;
		tmp = env->b[i - 1];
		while (--i)
			env->b[i] = env->b[i - 1];
		env->b[i] = tmp;
		if (disp)
			ft_printf("rrb\n");
	}
}

void	rrr(t_en *env, int disp)
{
	rra(env, 0);
	rrb(env, 0);
	if (disp)
		ft_printf("rrr\n");
}
