/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:47:56 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/11 21:09:25 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	n[2];

	n[0] = 0;
	while (n[0] <= 99)
	{
		n[1] = n[0] + 1;
		while (n[1] <= 99)
		{
			ft_putchar('0' + n[0] / 10);
			ft_putchar('0' + n[0] % 10);
			write(1, " ", 1);
			ft_putchar('0' + n[1] / 10);
			ft_putchar('0' + n[1] % 10);
			if (n[0] == 98 && n[1] == 99)
			{
				break ;
			}
			write(1, ", ", 2);
			n[1]++;
		}
		n[0]++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
