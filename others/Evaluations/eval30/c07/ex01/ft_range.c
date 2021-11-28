/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:41:52 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/26 13:21:03 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*inv;
	int	i;

	diff = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	inv = malloc(sizeof(*inv) * diff);
	while (min < max)
	{
		inv[i] = min;
		min++;
		i++;
	}
	return (inv);
}
