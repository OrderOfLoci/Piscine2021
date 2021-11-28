/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:55:22 by josolive          #+#    #+#             */
/*   Updated: 2021/09/29 14:03:19 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*ptr;
	int	*ptr1;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * size);
	if (ptr != NULL)
	{
		i = min;
		ptr1 = ptr;
		while (i < max)
		{
			*ptr1++ = i;
			i++;
		}
	}
	return (ptr);
}

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	int	*ptr;

	ptr = ft_range(7, 21);
	while (*ptr)
	{
		printf("[%d, %d[, %d\n", 7, 21, *ptr);
		ptr++;
	}

	ptr = ft_range(17, 17);
	printf("[%d, %d[, %p\n", 17, 17, ptr);

	ptr = ft_range(21, 17);
	printf("[%d, %d[, %p\n", 21, 17, ptr);

	return (0);
}

