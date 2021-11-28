/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:36:46 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/15 16:25:45 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			 || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			j = 0;
		else
			j++;
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}
