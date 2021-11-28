/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuny-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 01:07:43 by jbuny-fe          #+#    #+#             */
/*   Updated: 2021/09/29 11:26:07 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	new;

	i = 2;
	new = nb;
	if (nb <= 1)
		return (2);
	while (ft_is_prime(new) == 0)
		new++;
	return (new);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(27));
	return (0);
}
