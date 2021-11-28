/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuny-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:23:23 by jbuny-fe          #+#    #+#             */
/*   Updated: 2021/09/29 10:22:23 by jbuny-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb > 12 || nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			res = res * i;
			i++;
		}
	}
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}
*/
