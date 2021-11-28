/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:19:08 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/26 18:16:49 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	len(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	len_mtx(char **strs, int size, char *sep)
{
	int	i;
	int	ct;

	i = 0;
	ct = 0;
	while (i < size)
	{
		ct = ct + len(strs[i]);
		i++;
	}
	return (ct + ((size - 1) * len(sep) + 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*aux;
	int		j;
	int		c;
	int		i;

	i = 0;
	c = 0;
	j = 0;
	aux = malloc((len_mtx(strs, size, sep)) * sizeof(strs));
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	if (aux == NULL)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			aux[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			aux[c++] = sep[j++];
		i++;
	}
	aux[c] = '\0';
	return (aux);
}
