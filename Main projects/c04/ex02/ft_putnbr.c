/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:08:55 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/19 13:42:29 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	digits(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	power(int x, int e)
{
	int	i;
	int	b;

	i = 1;
	b = 1;
	while (i <= e)
	{
		b = b * x;
		i++;
	}
	return (b);
}

void	printer(int long n)
{
	int			i;
	int long	p;
	int long	b;

	i = 1;
	while (i <= digits(n))
	{
		p = digits(n) - i;
		b = ((n / power(10, p)) % 10) + '0';
		write(1, &b, 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int long	m;

	m = nb;
	if (m > 0)
	{
		printer(m);
	}
	if (m < 0)
	{
		write(1, "-", 1);
		m = m * (-1);
		printer(m);
	}
	if (m == 0)
	{
		write(1, "0", 1);
	}
}
