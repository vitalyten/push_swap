/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:26:11 by vtenigin          #+#    #+#             */
/*   Updated: 2016/12/27 22:11:30 by vtenigin         ###   ########.fr       */
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
	int	topa;
	int	topb;
	int	sp;
	int	mv;
}				t_en;

void		push_swap(char **av);
void		readinput(char **av, t_en *env);
int			isdup(long long l, t_en *env);
int			ft_isnumber(char *n);
long long	ft_atoll(const char *str);
void		showerr(void);

#endif
