/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:46:40 by ifreire-          #+#    #+#             */
/*   Updated: 2021/09/14 17:46:28 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_com(int x, int z);

void	ft_print_comb2(void)
{
	int	x;
	int	z;

	x = 0;
	while (x < 99)
	{
		z = x + 1;
		while (z <= 99)
		{
			ft_com(x, z);
			z++;
		}
		x++;
	}
}

void	ft_com(int x, int z)
{
	ft_putchar('0' + x / 10);
	ft_putchar('0' + x % 10);
	ft_putchar(' ');
	ft_putchar('0' + z / 10);
	ft_putchar('0' + z % 10);
	if (z != 99 || x != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
