/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:14:17 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/21 14:43:47 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb <= 0)
		return (0);
	while (n < 46340)
	{
		if (((n+1) * (n+1) > nb) && (n * n <= nb))
			return n;
		n++;
	}
	return (n);
}

int	ft_is_prime(int nb, int square)
{
	int	n;
	int sqrt;

	n = 2;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (n <= square)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
int	ft_find_next_prime(int nb)
{
	int sqrt;

	sqrt = ft_sqrt(nb);
	while (ft_is_prime(nb, sqrt) == 0 && nb < 2147483647)
	{
		nb++;
	}
	return (nb);
}
