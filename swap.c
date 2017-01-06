/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:28:05 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/05 17:38:58 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
sa : swap a - swap the first 2 elements at the top of stack a.
				Do nothing if there is only one or no elements).
sb : swap b - swap the first 2 elements at the top of stack b.
				Do nothing if there is only one or no elements).
ss : sa and sb at the same time.
*/

void	sa(t_en *env)
{
	int	tmp;

	if (env->lena > 1)
	{
		tmp = env->a[0];
		env->a[0] = env->a[1];
		env->a[1] = tmp;
	}
}

void	sb(t_en *env)
{
	int	tmp;

	if (env->lenb > 1)
	{
		tmp = env->b[0];
		env->b[0] = env->b[1];
		env->b[1] = tmp;
	}
}

void	ss(t_en *env)
{
	sa(env);
	sb(env);
}