/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 20:46:21 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 18:04:21 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	runops(t_en *env, char *str)
{
	(!ft_strcmp(str, "pa")) ? pa(env, 0) : 0;
	(!ft_strcmp(str, "pb")) ? pb(env, 0) : 0;
	(!ft_strcmp(str, "sa")) ? sa(env, 0) : 0;
	(!ft_strcmp(str, "sb")) ? sb(env, 0) : 0;
	(!ft_strcmp(str, "ss")) ? ss(env, 0) : 0;
	(!ft_strcmp(str, "ra")) ? ra(env, 0) : 0;
	(!ft_strcmp(str, "rb")) ? rb(env, 0) : 0;
	(!ft_strcmp(str, "rr")) ? rr(env, 0) : 0;
	(!ft_strcmp(str, "rra")) ? rra(env, 0) : 0;
	(!ft_strcmp(str, "rrb")) ? rrb(env, 0) : 0;
	(!ft_strcmp(str, "rrr")) ? rrr(env, 0) : 0;
}

void	checker(char **av)
{
	t_en	env;
	char	*str;

	readinput(av, &env);
	while (get_next_line(0, &str) > 0 && isop(str))
		runops(&env, str);
	(issort(&env)) ? ft_printf("OK\n") : ft_printf("KO\n");
}

int		main(int ac, char **av)
{
	char	**arg;
	int		i;

	if (ac == 1)
		exit(-1);
	if (ac == 2)
	{
		arg = ft_strsplit(av[1], ' ');
		checker(arg);
		i = -1;
		while (arg[++i])
			free(arg[i]);
		free(arg);
	}
	else
		checker(av + 1);
	return (0);
}
