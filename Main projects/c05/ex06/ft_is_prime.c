/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:45:28 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/21 14:22:34 by wblotz-c         ###   ########.fr       */
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

int	ft_is_prime(int nb)
{
	int	n;
	int sqrt;

	n = 2;
	sqrt = ft_sqrt(nb);
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (n <= sqrt)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
