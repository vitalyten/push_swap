/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:28:05 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 18:42:46 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_en *env, int disp)
{
	int	tmp;

	if (env->lena > 1)
	{
		tmp = env->a[0];
		env->a[0] = env->a[1];
		env->a[1] = tmp;
		if (disp)
			ft_printf("sa\n");
	}
}

void	sb(t_en *env, int disp)
{
	int	tmp;

	if (env->lenb > 1)
	{
		tmp = env->b[0];
		env->b[0] = env->b[1];
		env->b[1] = tmp;
		if (disp)
			ft_printf("sb\n");
	}
}

void	ss(t_en *env, int disp)
{
	sa(env, 0);
	sb(env, 0);
	if (disp)
		ft_printf("ss\n");
}
