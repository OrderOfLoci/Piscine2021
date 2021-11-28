/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:13:22 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/27 18:38:11 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	while (dest[i])
		i++;
	dest_len = i;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	nb = 20;
	char dest[100] = "hey ho";
	char src[] = ", let's go.\n";

	printf("%s\n", strncat(dest, src, nb));
	//printf("%s", ft_strncat(dest, src, nb));
}

