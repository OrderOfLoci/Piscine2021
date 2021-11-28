/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:26:45 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 14:30:54 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int	i;
	char *aux;

	i = 0;
	aux = (char *)malloc(sizeof(src));
	while (src[i] != '\0')
	{
		aux[i] = src[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
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

