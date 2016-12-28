/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:26:11 by vtenigin          #+#    #+#             */
/*   Updated: 2016/12/27 21:03:51 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"

typedef struct	s_env
{
	int	*a;
	int	*b;
	int	lena;
	int	lenb;
	int	topa;
	int	topb;
	int	sp;
	int	mv;
}				t_env;

#endif
