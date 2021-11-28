/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:41:13 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 17:06:32 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int find_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int ft_atoi(char *c)
{
	int	i;
	int	s;
	int res;

	i = 0;
	s = 1;
	res = 0;
	while (c[i] == ' ' || c[i] == '\t')
		i++;
	while (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-' && c[i + 1] != '-' && c[i + 1] != '+')
			s = -1 * s;
		i++;
	}
	while (c[i] >= '0' && c[i] <= '9')
	{
		res = (10 * res) + (c[i] - '0');
		i++;
	}
	return (s * res);
}

int prime_sum (int nb)
{
	int aux;
	int i;

	aux = 0;
	i = 2;
	while (i <= nb)
	{
		if (find_prime(i) == 1)
			aux = aux + i;
		i++;
	}
	return (aux);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(prime_sum(ft_atoi(argv[1])));
	}
	write(1, "\n", 1);
}
