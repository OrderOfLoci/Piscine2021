/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:58:49 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/15 18:03:06 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && (str[i] >= 'a' && str[i] <= 'z' ))
		{
			str[i] = str[i] - 32;
			j++;
		}
		else if (j != 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i] < '0' || str[i] > '9' && str[i] < 'A')
			 || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			j = 0;
		else
			j++;
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}
