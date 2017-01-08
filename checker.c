/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 20:46:21 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/07 17:52:11 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	runops(t_en *env, char *str)
{
	(!ft_strcmp(str, "pa")) ? pa(env) : 0;
	(!ft_strcmp(str, "pb")) ? pb(env) : 0;
	(!ft_strcmp(str, "sa")) ? sa(env) : 0;
	(!ft_strcmp(str, "sb")) ? sb(env) : 0;
	(!ft_strcmp(str, "ss")) ? ss(env) : 0;
	(!ft_strcmp(str, "ra")) ? ra(env) : 0;
	(!ft_strcmp(str, "rb")) ? rb(env) : 0;
	(!ft_strcmp(str, "rr")) ? rr(env) : 0;
	(!ft_strcmp(str, "rra")) ? rra(env) : 0;
	(!ft_strcmp(str, "rrb")) ? rrb(env) : 0;
	(!ft_strcmp(str, "rrr")) ? rrr(env) : 0;
	dispstack(env);
}

int		issort(t_en *env)
{
	int i;

	i = -1;
	if (env->lenb == 0)
	{
		while (++i < env->lena - 1)
			if (env->a[i] > env->a[i + 1])
				return(0);
		return (1);
	}
	else
		return (0);
}

void	checker(char **av)
{
	t_en	env;
	char	*str;
	// t_ops	*ops;

	// ops = (t_ops *)malloc(sizeof(t_ops));
	// ops->next = NULL;
	// ops->prev = NULL;
	// ops->op = HEAD;
	readinput(av, &env);
	dispstack(&env);
	while (get_next_line(0, &str) > 0 && isop(str))
	{
		// ops->next = addop(ops->next, str);
		// ops->next->prev = ops;
		// ops = ops->next;
		runops(&env, str);
	}
	// while (ops->prev)
	// 	ops = ops->prev;
	// runops(&env, ops);
	(issort(&env)) ? ft_printf("OK\n") : ft_printf("KO\n");
}

int		main(int ac, char **av)
{
	if (ac == 1)
		exit(-1);
	checker(av + 1);
	return (0);
}

// t_ops	*addop(t_ops *ops, char *str)
// {
// 	ops = (t_ops *)malloc(sizeof(t_ops));
// 	ops->next = NULL;
// 	if (!ft_strcmp(str, "pa"))
// 		ops->op = PA;
// 	if (!ft_strcmp(str, "pb"))
// 		ops->op = PB;
// 	if (!ft_strcmp(str, "sa"))
// 		ops->op = SA;
// 	if (!ft_strcmp(str, "sb"))
// 		ops->op = SB;
// 	if (!ft_strcmp(str, "ss"))
// 		ops->op = SS;
// 	if (!ft_strcmp(str, "ra"))
// 		ops->op = RA;
// 	if (!ft_strcmp(str, "rb"))
// 		ops->op = RB;
// 	if (!ft_strcmp(str, "rr"))
// 		ops->op = RR;
// 	if (!ft_strcmp(str, "rra"))
// 		ops->op = RRA;
// 	if (!ft_strcmp(str, "rrb"))
// 		ops->op = RRB;
// 	if (!ft_strcmp(str, "rrr"))
// 		ops->op = RRR;
// 	return (ops);
// }

// void	runops(t_en *env, t_ops *ops)
// {
// 	while (ops)
// 	{
// 		(ops->op == PA) ? pa(env) : 0;
// 		(ops->op == PB) ? pb(env) : 0;
// 		(ops->op == SA) ? sa(env) : 0;
// 		(ops->op == SB) ? sb(env) : 0;
// 		(ops->op == SS) ? ss(env) : 0;
// 		(ops->op == RA) ? ra(env) : 0;
// 		(ops->op == RB) ? rb(env) : 0;
// 		(ops->op == RR) ? rr(env) : 0;
// 		(ops->op == RRA) ? rra(env) : 0;
// 		(ops->op == RRB) ? rrb(env) : 0;
// 		(ops->op == RRR) ? rrr(env) : 0;
// 		dispstack(env);
// 		ops = ops->next;
// 	}
// }
