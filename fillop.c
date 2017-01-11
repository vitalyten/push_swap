/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 14:48:19 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 14:51:26 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ops	*filluu(t_en *env, int i)
{
	t_ops	*uu;
	int		nra;
	int		nrb;

	uu = (t_ops *)malloc(sizeof(t_ops));
	nra = i;
	nrb = findposb(env, i);
	uu->nrr = psmin(nra, nrb);
	uu->nra = nra - uu->nrr;
	uu->nrb = nrb - uu->nrr;
	uu->nrra = 0;
	uu->nrrb = 0;
	uu->nrrr = 0;
	uu->len = uu->nrr + uu->nra + uu->nrb;
	return (uu);
}

t_ops	*filldd(t_en *env, int i)
{
	t_ops	*dd;
	int		nrra;
	int		nrrb;

	dd = (t_ops *)malloc(sizeof(t_ops));
	nrra = env->lena - i;
	nrrb = env->lenb - findposb(env, i);
	dd->nrrr = psmin(nrra, nrrb);
	dd->nrra = nrra - dd->nrrr;
	dd->nrrb = nrrb - dd->nrrr;
	dd->nra = 0;
	dd->nrb = 0;
	dd->nrr = 0;
	dd->len = dd->nrrr + dd->nrra + dd->nrrb;
	return (dd);
}

t_ops	*fillud(t_en *env, int i)
{
	t_ops	*ud;

	ud = (t_ops *)malloc(sizeof(t_ops));
	ud->nra = i;
	ud->nrrb = env->lenb - findposb(env, i);
	ud->nrb = 0;
	ud->nrr = 0;
	ud->nrra = 0;
	ud->nrrr = 0;
	ud->len = ud->nra + ud->nrrb;
	return (ud);
}

t_ops	*filldu(t_en *env, int i)
{
	t_ops	*du;

	du = (t_ops *)malloc(sizeof(t_ops));
	du->nrra = env->lena - i;
	du->nrb = findposb(env, i);
	du->nra = 0;
	du->nrr = 0;
	du->nrrb = 0;
	du->nrrr = 0;
	du->len = du->nrra + du->nrb;
	return (du);
}
