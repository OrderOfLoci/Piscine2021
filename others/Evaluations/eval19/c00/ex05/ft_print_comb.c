/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:54:51 by ifreire-          #+#    #+#             */
/*   Updated: 2021/09/14 17:50:50 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	print_comb(char a, char b, char c)
{
	ft_write(a);
	ft_write(b);
	ft_write(c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_write(',');
		ft_write(' ');
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				print_comb(x, y, z);
				++z;
			}
			y++;
		}
		x++;
	}
}
