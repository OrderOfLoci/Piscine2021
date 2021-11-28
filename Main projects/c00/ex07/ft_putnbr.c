/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putndr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:50:05 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/12 14:07:18 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int		counter(int n);

int		power(int b, int x);

void	char_maker(int long n);

int	counter(int n)
{
	int	c;

	c = 0;
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

int	power(int b, int x)
{
	int	c;
	int	p;

	c = 0;
	p = 1;
	while (c != x)
	{
		p = p * b;
		c++;
	}
	if (x == 0)
	{
		p = 1;
	}
	return (p);
}

void	char_maker(int long n)
{
	int		x;
	char	c;
	int		i;
	int		p;

	i = 1;
	x = counter(n);
	while (i <= x)
	{
		p = x - i;
		c = ((n / power(10, p)) % 10) + '0';
		write(1, &c, 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int long	m;

	m = nb;
	if (m > 0)
	{
		char_maker(m);
	}
	if (m < 0)
	{
		write(1, "-", 1);
		m = m * (-1);
		char_maker(m);
	}
	if (m == 0)
	{
		write(1, "0", 1);
	}
}
