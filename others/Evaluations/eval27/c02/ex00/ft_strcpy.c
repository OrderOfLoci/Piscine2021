/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 07:06:47 by gpacient          #+#    #+#             */
/*   Updated: 2021/09/22 12:33:51 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int main ()
{
	char src[8] ="atreides";
	char dest[8];
	ft_strcpy(dest,src);
	int c = 0;
	while (dest[c])
	{
		write(1,&dest[c],1);
		c++;
	}
}

