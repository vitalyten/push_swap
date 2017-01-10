/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:57:47 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/08 20:21:35 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
ra : rotate a - shift up all elements of stack a by 1.
				The first element becomes the last one.
rb : rotate b - shift up all elements of stack b by 1.
				The first element becomes the last one.
rr : ra and rb at the same time.
*/

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

void rr(t_en *env, int disp)
{
	ra(env, 0);
	rb(env, 0);
	if (disp)
		ft_printf("rr\n");
}

// void	ra(t_en *env)
// {
// 	int	i;
// 	int	tmp;

// 	if (env->lena > 1)
// 	{
// 		i = -1;
// 		tmp = env->a[0];
// 		while (++i < env->lena - 1)
// 			env->a[i] = env->a[i + 1];
// 		env->a[i] = tmp;
// 		ft_printf("ra\n");
// 	}
// }

// void	rb(t_en *env)
// {
// 	int	i;
// 	int	tmp;

// 	if (env->lenb > 1)
// 	{
// 		i = -1;
// 		tmp = env->b[0];
// 		while (++i < env->lenb - 1)
// 			env->b[i] = env->b[i + 1];
// 		env->b[i] = tmp;
// 		ft_printf("rb\n");
// 	}
// }

// void rr(t_en *env)
// {
// 	ra(env);
// 	rb(env);
// }
