/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:05:47 by grocha-l          #+#    #+#             */
/*   Updated: 2021/09/29 11:57:33 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_strlen_strs(int size, char **strs, char *sep)
{
	int	cont;
	int	len;

	cont = 0;
	len = 0;
	while (size > 0)
	{
		len += ft_strlen(strs[cont]);
		cont++;
		size--;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		cont;
	char	*temp;

	cont = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	string = (char *)malloc(sizeof(char) * ft_strlen_strs(size, strs, sep));
	if (string == NULL)
		return (0);
	temp = string;
	while (cont < size)
	{
		temp += ft_strlen(ft_strcpy(temp, strs[cont]));
		if (cont < size - 1)
			temp += ft_strlen(ft_strcpy(temp, sep));
		cont++;
	}
	*temp = '\0';
	return (string);
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

