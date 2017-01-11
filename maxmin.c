/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxmin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 16:49:21 by vtenigin          #+#    #+#             */
/*   Updated: 2017/01/10 18:57:19 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		psmin(int a, int b)
{
	return ((a < b) ? a : b);
}

int		psmax(int a, int b)
{
	return ((a > b) ? a : b);
}

int		findmax(int len, int *arr)
{
	int	max;
	int	imax;
	int	i;

	max = arr[0];
	i = 0;
	imax = 0;
	while (++i < len)
		if (arr[i] > max)
		{
			max = arr[i];
			imax = i;
		}
	return (imax);
}

int		findmin(int len, int *arr)
{
	int	min;
	int	imin;
	int	i;

	min = arr[0];
	i = 0;
	imin = 0;
	while (++i < len)
		if (arr[i] < min)
		{
			min = arr[i];
			imin = i;
		}
	return (imin);
}
