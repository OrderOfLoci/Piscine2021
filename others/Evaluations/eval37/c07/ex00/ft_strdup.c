/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:24:58 by grocha-l          #+#    #+#             */
/*   Updated: 2021/09/29 11:49:19 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		cont;

	cont = 0;
	str = (char *) malloc(sizeof(src));
	if (!str)
		return (NULL);
	while (src[cont] != '\0')
	{
		str[cont] = src[cont];
		cont++;
	}
	str[cont] = '\0';
	return (str);
}
char *ft_strdup(char *src);

int	main(void)
{
	char *test;
	char *dup;

	test = "Testando caralho";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);
}
