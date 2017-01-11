/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 21:42:26 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 13:50:14 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **av)
{
	t_en env;
	// char *str;

	readinput(av, &env);
	(issort(&env)) ? exit(1) : 0;
	// dispstack(&env);
	sort(&env);
	// pushall(&env);
	// dispstack(&env);
	// for (int i = 0; i < 10; i++)
	// {
	// 	ft_printf("n = %d pos = %d\n", env.a[i], findposb(&env, i));
	// }

	// select_sort(&env);
	// while (get_next_line(0, &str) > 0 && isop(str))
	// {
	// 	if (!ft_strcmp(str, "pa"))
	// 		pa(&env);
	// 	if (!ft_strcmp(str, "pb"))
	// 		pb(&env);
	// 	if (!ft_strcmp(str, "sa"))
	// 		sa(&env);
	// 	if (!ft_strcmp(str, "sb"))
	// 		sb(&env);
	// 	if (!ft_strcmp(str, "ss"))
	// 		ss(&env);
	// 	if (!ft_strcmp(str, "ra"))
	// 		ra(&env);
	// 	if (!ft_strcmp(str, "rb"))
	// 		rb(&env);
	// 	if (!ft_strcmp(str, "rr"))
	// 		rr(&env);
	// 	if (!ft_strcmp(str, "rra"))
	// 		rra(&env);
	// 	if (!ft_strcmp(str, "rrb"))
	// 		rrb(&env);
	// 	if (!ft_strcmp(str, "rrr"))
	// 		rrr(&env);
	// 	dispstack(&env);
	// }
}

int		main(int ac, char **av) // free arg
{
	char	**arg;

	if (ac == 1)
		exit(-1);
	if (ac == 2)
	{
		arg = ft_strsplit(av[1], ' ');
		push_swap(arg);
	}
	else
		push_swap(av + 1);
	return (0);
}
