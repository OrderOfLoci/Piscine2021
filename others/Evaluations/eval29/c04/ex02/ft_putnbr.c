/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:33:35 by nandre-f          #+#    #+#             */
/*   Updated: 2021/09/22 14:54:03 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	out(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		out('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		out(48 + nb % 10);
	}
}

#include <stdio.h>

void	ft_putnbr(int n);

int		main(void)
{
    printf(" (printed) should be 1");
    ft_putnbr(1);
    printf("\n (printed) should be 0");
    ft_putnbr(0);
    printf("\n (printed) should be -1");
    ft_putnbr(-1);
    printf("\n (printed) should be 2147483647");
    ft_putnbr(2147483647);
    printf("\n (printed) should be -21474836478");
    ft_putnbr(-2147483648);
    printf("\n");
    return (0);
}
