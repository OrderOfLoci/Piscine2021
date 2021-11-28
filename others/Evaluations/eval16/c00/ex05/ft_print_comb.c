/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:58:22 by daalmeid          #+#    #+#             */
/*   Updated: 2021/09/13 16:48:10 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_numlimit(int a, int x, int y)
{
	if (a == 7 && x == 8 && y == 9)
	{
		write(1, "789", 3);
	}
	else
	{
		ft_putchar(a + 48);
		ft_putchar(x + 48);
		ft_putchar(y + 48);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	x;
	int	y;

	a = 0;
	while (a <= 7)
	{
		x = a + 1;
		while (x <= 8)
		{	
			y = x + 1;
			while (y <= 9)
			{
				ft_numlimit(a, x, y);
				y++;
			}
			x++;
		}
		a++;
	}
}
