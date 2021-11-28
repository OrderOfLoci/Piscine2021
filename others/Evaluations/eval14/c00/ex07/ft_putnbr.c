/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:05:48 by jrebelo-          #+#    #+#             */
/*   Updated: 2021/09/13 12:14:58 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	putchar(char a);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		putchar('-');
		putchar('2');
		nb = 147483648;
		ft_putnbr(nb);
	}
	else if (nb < 0)
	{
		putchar('-');
		nb = nb * (-1);
		ft_putnbr(nb);
	}
	else if (nb <= 10)
	{
		putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	putchar(char a)
{
	write(1, &a, 1);
}
