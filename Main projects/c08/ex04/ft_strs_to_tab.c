/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:30:59 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/27 19:33:13 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	counter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*strdup(char *str)
{
	int		i;
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (counter(str) + 1));
	if (dup == NULL)
		return (0);
	i = 0;
	while (str [i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;

	i = 0;
	arr = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = counter(av[i]);
		arr[i].str = av[i];
		arr[i].copy = strdup(av[i]);
		i++;
	}
	arr[i] = (struct s_stock_str){0, 0, 0};
	return (arr);
}
