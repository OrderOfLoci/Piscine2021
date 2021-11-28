/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:51:14 by daalmeid          #+#    #+#             */
/*   Updated: 2021/09/13 16:51:50 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ftputnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ftputnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ftputnbr(nb / 10);
		}
		ft_putchar(nb % 10 + 48);
	}
}
