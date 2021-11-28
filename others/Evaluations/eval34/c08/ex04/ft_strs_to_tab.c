/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:48:48 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/09/27 16:41:21 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_str_length(char *str)
{
	int	ind;

	ind = 0;
	while (str[ind])
		ind++;
	return (ind);
}

char	*ft_strdup(char *src)
{
	int		ind;
	char	*dest;

	ind = 0;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	while (src[ind])
	{
		dest[ind] = src[ind];
		ind++;
	}
	dest[ind] = '\0';
	return (dest);
}

struct s_stick_str	*ft_strs_to_tab(int ac, char **av)
{
	int					ind;
	struct s_stock_str	*arr;

	ac = ac + 0;
	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!arr)
		return (NULL);
	ind = 0;
	while (ind < ac)
	{
		arr[ind].size = ft_str_length(av[ind]);
		arr[ind].str = av[ind];
		arr[ind].copy = ft_strdup(av[ind]);
		ind++;
	}
	arr[ind] = (struct s_stock_str){0, 0, 0};
	return (arr);
}
