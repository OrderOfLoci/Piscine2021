/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:36:37 by grocha-l          #+#    #+#             */
/*   Updated: 2021/09/29 11:54:58 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	cont;
	int	*nbr;

	cont = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	nbr = (int *)malloc(sizeof(int) * (max - min));
	if (!nbr)
	{
		return (-1);
	}
	while (min < max)
	{
		nbr[cont] = min;
		cont++;
		min++;
	}
	*range = nbr;
	return (cont);
}

	

