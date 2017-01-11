/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:57:47 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 18:50:12 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_en *env, int disp)
{
	int	i;
	int	tmp;

	if (env->lena > 1)
	{
		i = -1;
		tmp = env->a[0];
		while (++i < env->lena - 1)
			env->a[i] = env->a[i + 1];
		env->a[i] = tmp;
		if (disp)
			ft_printf("ra\n");
	}
}

void	rb(t_en *env, int disp)
{
	int	i;
	int	tmp;

	if (env->lenb > 1)
	{
		i = -1;
		tmp = env->b[0];
		while (++i < env->lenb - 1)
			env->b[i] = env->b[i + 1];
		env->b[i] = tmp;
		if (disp)
			ft_printf("rb\n");
	}
}

void	rr(t_en *env, int disp)
{
	ra(env, 0);
	rb(env, 0);
	if (disp)
		ft_printf("rr\n");
}
