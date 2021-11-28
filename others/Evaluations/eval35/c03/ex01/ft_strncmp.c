/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:22:11 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/27 18:35:54 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				aux;

	i = 0;
	aux = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && !aux && i < n)
	{
		aux = s1[i] - s2[i];
		i++;
	}
	if ((s2[i] == '\0' || s1[i] == '\0') && !aux && i < n)
	{
		aux = s1[i] - s2[i];
	}
	return (aux);
}

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char s1[] = "Nada a ver";
	char s2[] = "teste de Comparacao";
	char s3[] = "Teste";

	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", ft_strncmp(s1, s2, 5), ft_strncmp(s2, s1, 5), ft_strncmp(s1, s3, 5), ft_strncmp(s3, s1, 5), ft_strncmp(s2, s3, 5), ft_strncmp(s3, s2, 5));
	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", strncmp(s1, s2, 5), strncmp(s2, s1, 5), strncmp(s1, s3, 5), strncmp(s3, s1, 5), strncmp(s2, s3, 5), strncmp(s3, s2, 5));
}
