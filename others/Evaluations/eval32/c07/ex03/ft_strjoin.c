/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:42:28 by arocha-l          #+#    #+#             */
/*   Updated: 2021/09/26 17:52:45 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	k;
	int	temp;
	int	v;

	v = 0;
	temp = 0;
	k = 0;
	i = 0;
	while (sep[v])
		v++;
	while (i < size)
	{
		while (strs[i][k])
			k++;
		temp = temp + k + v;
		k = 0;
		i++;
	}
	temp = temp - v;
	return (temp);
}

char	*ft_create(char **str, char *sep, int size, char *array)
{
	int	i;
	int	k;
	int	n;

	i = 0;
	k = 0;
	n = -1;
	while (i < size)
	{
		while (str[i][++n])
		{
			array[k] = str[i][n];
			k++;
		}
		n = -1;
		while (sep[++n] && i < (size - 1))
		{
			array[k] = sep[n];
			k++;
		}
		n = -1;
		i++;
	}
	array[k] = '\0';
	return (array);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*array;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_len(size, strs, sep);
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (array == NULL)
		return (NULL);
	array = ft_create(strs, sep, size, array);
	return (array);
}

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[10];

	text[0] = "Testando";
	text[1] = "a";
	text[2] = "funcao";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separador";
	text[7] = "\' - \'";
	text[8] = "e tamanho";
	text[9] = "10";

	printf("%s\n", ft_strjoin(10, text, " - "));
}

