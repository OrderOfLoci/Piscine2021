/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:29:32 by rneves-c          #+#    #+#             */
/*   Updated: 2021/09/12 20:13:56 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int x);

void	print_top(int x, char y, char z, char k)
{
	ft_putchar(y, 1);
	ft_putchar(z, (x - 2));
	if (x >= 2)
	{
		ft_putchar(k, 1);
	}
}

void	rush(int x, int y)
{
	int		counter;

	if (x != 0 && y != 0)
	{
		print_top(x, 'A', 'B', 'A');
		if (y > 1)
		{
			write(1, "\n", 2);
		}
		counter = 0;
		while (counter < y - 2)
		{
			print_top(x, 'B', ' ', 'B');
			write(1, "\n", 2);
			counter ++;
		}
		if (y >= 2)
		{
			print_top(x, 'C', 'B', 'C');
			write(1, "\n", 2);
		}
	}
}
