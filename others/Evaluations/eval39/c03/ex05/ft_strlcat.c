/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 08:17:11 by doliveir          #+#    #+#             */
/*   Updated: 2021/09/27 00:08:14 by doliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	d = ft_strlen(dest);
	s = 0;
	while (src[s] != '\0' && d + 1 < size)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[s]));
}

/*int	main(void)
{
	char	a[20] = "ola boa";
	char	b[] = "tarde";

	printf("%d\n", ft_strlcat(a, b, 7));
	return (0);
}*/
