/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeller- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:37:12 by jkeller-          #+#    #+#             */
/*   Updated: 2021/09/21 11:14:28 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	n;
	int	u;

	n = 2;
	if (nb < 2)
	{
		if (nb == 0)
			nb += 2;
		if (nb == 1)
			nb += 2;
	}
	while (n <= nb / 2)
	{
		if (nb % n == 0)
		{
			nb += 1;
			ft_find_next_prime(nb);
		}
		n++;
	}
	u = nb;
	return (u);
}

int main ()
{
	printf("%d", ft_find_next_prime(2147483644));
}
