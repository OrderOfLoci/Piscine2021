/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:51:20 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/09/15 18:53:36 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		ind;
	char	let;

	while (true)
	{
		let = str[in];
		if (let == '\0')
		{
			break ;
		}
		else
		{
			ft_putchar(let);
		}
	}
}
