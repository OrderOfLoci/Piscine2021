/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:34:41 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/15 16:06:42 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	counter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	if_str0(int j, int ret)
{
	if (j == 0)
		ret = 1;
	printf("Empty string, ret is %d", ret);
	printf("Empty string, j is %d", j);
	return (ret);
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
		else if (str[i] >= 'A' && str[i] <= 'Z')
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
	return (ret);
}
