/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:25:33 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/14 18:26:14 by msavaris         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;
	int	ret;

	j = counter(str);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
