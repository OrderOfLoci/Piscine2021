/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:58:07 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/12 14:12:10 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

char	ft_hpr(char x, int i);

char	ft_hpr(char x, int i)
{
	char	res;

	if (i == 0)
	{
		res = x / 10 + '0';
		write(1, &res, 1);
	}
	else
	{
		res = x % 10 + '0';
		write(1, &res, 1);
	}
	return (res);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_hpr(a, 0);
			ft_hpr(a, 1);
			write(1, " ", 1);
			ft_hpr(b, 0);
			ft_hpr(b, 1);
			if (!(a == 98 && b == 99))
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
