/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:18:28 by daalmeid          #+#    #+#             */
/*   Updated: 2021/09/13 14:37:58 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_one_count(int first, int last)
{
	char	dezen;
	char	uni;

	if (first <= 9)
	{
		uni = first + 48;
		ft_putchar2('0', uni);
	}
	else if (first <= last)
	{
		uni = first % 10 + 48;
		dezen = first / 10 + 48;
		ft_putchar2(dezen, uni);
	}
}

void	ft_double_count(int one, int nn)
{	
	ft_one_count(one, 98);
	write(1, " ", 1);
	ft_one_count(nn, 99);
	if (one != 98 || nn != 99)
	{
		ft_putchar2(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	int	f;
	int	l;

	f = 0;
	while (f <= 98)
	{
		l = f + 1;
		while (l <= 99)
		{
			ft_double_count(f, l);
			l++;
		}
		f++;
	}
}
