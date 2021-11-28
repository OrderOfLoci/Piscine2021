/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:42:23 by josolive          #+#    #+#             */
/*   Updated: 2021/09/29 14:04:27 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (-1);
	}
	ptr = (int *) malloc(sizeof(int) * size);
	if (ptr != NULL)
	{
		i = min;
		*range = ptr;
		while (i < max)
		{
			*ptr++ = i;
			i++;
		}
	}
	else
		return (-1);
	return (size);
}

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	int size = 0;
	int *ptr; // = &size;
	int	**range = NULL; // = &ptr;

	range = (int **) malloc(sizeof(int) * size);
	if (range != NULL)
	{
		size = ft_ultimate_range(range, 7, 21);
		printf("[%d, %d[, size= %d, range= %p, *range= %p, **range= %d\n", \
			 17, 17, size, range, *range, **range);

		ptr = *range;
		while (*ptr)
		{
			printf("[%d, %d[, size= %d, %d\n", 7, 21, size, *ptr);
			ptr++;
		}

		size = ft_ultimate_range(range, 17, 17);
		printf("[%d, %d[, size= %d, *range= %p\n", 17, 17, size, *range);

		size = ft_ultimate_range(range, 21, 17);
		printf("[%d, %d[, size= %d, *range= %p\n", 21, 17, size, *range);
	}
	return (0);
}
