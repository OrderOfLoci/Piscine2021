/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:29:16 by gpacient          #+#    #+#             */
/*   Updated: 2021/09/22 12:36:19 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}	
	return (dest);
}

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main ()
{
	char src[9]="atreides";
	char dest[40];
	ft_strncpy(dest,src,4);
	int c = 0;
	while (dest[c])
	{
		write(1,&dest[c],1);
		c++;
	}
}
