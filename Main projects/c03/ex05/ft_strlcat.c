/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:30:32 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/18 16:56:22 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int counter(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	aux;

	i = 0;
	aux = counter(dest);
	if (size <= aux)
		return(size + counter(src));

	while (src[i] != '\0' && i + aux + 1 < (size))
	{
		dest[i + aux] = src[i];
		i++;
	}
	dest[i + aux] = '\0';
	return (counter(dest) +counter (&src[i]));
}

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src [] = "Blow up the outside world.\n";
	char dest [23] = "Blow up the outside. \n";

	ft_strlcat(dest, src, 52);
	printf("%s", dest);
	return (0);
}
