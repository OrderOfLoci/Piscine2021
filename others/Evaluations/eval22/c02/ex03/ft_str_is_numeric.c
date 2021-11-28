/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:22:48 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/15 16:52:01 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	counter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;
	int	ret;

	j = counter(str);
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			ret = 1;
		}
		else
		{
			ret = 0;
			break ;
		}
		i++;
	}
	if (j == 0)
	{
		ret = 1;
	}
	return (ret);
}
