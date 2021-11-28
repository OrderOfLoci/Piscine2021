/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:14:50 by josolive          #+#    #+#             */
/*   Updated: 2021/09/29 14:02:23 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*ptr;
	char	*ptr1;

	i = 0;
	while (src[i])
		i++;
	size = i;
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr != NULL)
	{
		i = 0;
		ptr1 = ptr;
		while (i < size)
		{
			*ptr1++ = src[i];
			i++;
		}
		*ptr1 = '\0';
	}
	return (ptr);
}

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char	str[20];
	char	*ptr;

	strcpy (str, "Hello World!");
	ptr = ft_strdup(str);
	while (*ptr)
	{
		write(1, ptr, 1);
		ptr++;
	}
	write(1, "\n", 1);
	return (0);
}
