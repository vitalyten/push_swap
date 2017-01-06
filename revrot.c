/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:10:59 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/05 18:40:56 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
rra : reverse rotate a - shift down all elements of stack a by 1.
						The flast element becomes the first one.
rrb : reverse rotate b - shift down all elements of stack b by 1.
						The flast element becomes the first one.
rrr : rra and rrb at the same time.
*/

void	rra(t_en *env)
{
	int	i;
	int	tmp;

	if (env->lena > 1)
	{
		i = env->lena - 1;
		tmp = env->a[i];
		while (--i)
			env->a[i] = env->a[i - 1];
		env->a[i] = tmp;
	}
}

void	rrb(t_en *env)
{
	int	i;
	int	tmp;

	if (env->lenb > 1)
	{
		i = env->lenb - 1;
		tmp = env->b[i];
		while (--i)
			env->b[i] = env->b[i - 1];
		env->b[i] = tmp;
	}
}

void rrr(t_en *env)
{
	rra(env);
	rrb(env);
}
