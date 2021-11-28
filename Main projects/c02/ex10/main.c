/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:11:13 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/15 16:43:46 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char src[]="atreidesvsharkonnen";
	char dest[41];
	ft_strlcpy(dest,src,0);
	int c = 0;
	printf(" %d", ft_strlcpy(dest, src, 4));
	while (dest[c])
	{
		write(1,&dest[c],1);
		c++;
	}
}

