/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:26:11 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/07 17:52:37 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/ft_printf.h"
# include <unistd.h>

typedef struct	s_en
{
	int	*a;
	int	*b;
	int	lena;
	int	lenb;
	// int	topa;
	// int	topb;
	// int	sp;
	// int	mv;
}				t_en;

// typedef enum	e_op
// {
// 	HEAD, SA, SB, SS, PA, PB, RA, RB, RR, RRA, RRB, RRR
// }				t_op;

// typedef struct	s_ops
// {
// 	t_op			op;
// 	struct s_ops	*next;
// 	struct s_ops	*prev;
// }				t_ops;

void		push_swap(char **av);
int			isop(char *str);
void		dispstack(t_en *env);
void		readinput(char **av, t_en *env);
int			isdup(long long l, t_en *env);
int			ft_isnumber(char *n);
long long	ft_atoll(const char *str);
void		showerr(void);
void		sa(t_en *env);
void		sb(t_en *env);
void		ss(t_en *env);
void		pa(t_en *env);
void		pb(t_en *env);
void		ra(t_en *env);
void		rb(t_en *env);
void		rr(t_en *env);
void		rra(t_en *env);
void		rrb(t_en *env);
void		rrr(t_en *env);

#endif
