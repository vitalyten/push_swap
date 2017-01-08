/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 21:42:26 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/07 17:25:06 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **av)
{
	t_en env;
	char *str;

	readinput(av, &env);
	dispstack(&env);
	while (get_next_line(0, &str) > 0 && isop(str))
	{
		if (!ft_strcmp(str, "pa"))
			pa(&env);
		if (!ft_strcmp(str, "pb"))
			pb(&env);
		if (!ft_strcmp(str, "sa"))
			sa(&env);
		if (!ft_strcmp(str, "sb"))
			sb(&env);
		if (!ft_strcmp(str, "ss"))
			ss(&env);
		if (!ft_strcmp(str, "ra"))
			ra(&env);
		if (!ft_strcmp(str, "rb"))
			rb(&env);
		if (!ft_strcmp(str, "rr"))
			rr(&env);
		if (!ft_strcmp(str, "rra"))
			rra(&env);
		if (!ft_strcmp(str, "rrb"))
			rrb(&env);
		if (!ft_strcmp(str, "rrr"))
			rrr(&env);
		dispstack(&env);
	}
}

int		main(int ac, char **av)
{
	if (ac == 1)
		exit(-1);
	push_swap(av + 1);
	return (0);
}
