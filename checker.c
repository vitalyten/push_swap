/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 20:46:21 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/05 20:07:23 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **av)
{
	t_en env;

	readinput(av, &env);
	dispstack(&env);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		showerr();
	checker(av + 1);
	return (0);
}