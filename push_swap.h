/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:26:11 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/09 19:53:18 by vtenigin         ###   ########.fr       */
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
// 	t_op	*op;
// 	int		len;
// }				t_ops;

typedef struct	s_ops
{
	int	nra;
	int	nrb;
	int	nrr;
	int	nrra;
	int	nrrb;
	int	nrrr;
	int	len;
}				t_ops;

void		push_swap(char **av);
int			sort(t_en *env);
void		pushall(t_en *env); // remove
int			findposb(t_en *env, int j);
int			findmax(int len, int *arr);
int			findmin(int len, int *arr);
int			select_sort(t_en *env);
int			isop(char *str);
int			issort(t_en *env);
void		dispstack(t_en *env);
void		readinput(char **av, t_en *env);
int			isdup(long long l, t_en *env);
int			ft_isnumber(char *n);
long long	ft_atoll(const char *str);
void		showerr(void);
void		sa(t_en *env, int disp);
void		sb(t_en *env, int disp);
void		ss(t_en *env, int disp);
void		pa(t_en *env, int disp);
void		pb(t_en *env, int disp);
void		ra(t_en *env, int disp);
void		rb(t_en *env, int disp);
void		rr(t_en *env, int disp);
void		rra(t_en *env, int disp);
void		rrb(t_en *env, int disp);
void		rrr(t_en *env, int disp);

#endif
