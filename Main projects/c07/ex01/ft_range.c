/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:09:51 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/26 18:27:34 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*rg;

	i = min;
	j = 0;
	if (min >= max)
		return (NULL);
	rg = (int *) malloc ((max - min) * sizeof(int));
	while (i >= min && i < max)
	{
		rg[j] = i;
		i++;
		j++;
	}
	return (rg);
}
