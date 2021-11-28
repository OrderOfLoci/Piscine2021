/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuny-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:47:53 by jbuny-fe          #+#    #+#             */
/*   Updated: 2021/09/29 11:18:41 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		if (nb == 1)
			return (1);
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
	else
		return (0);
}

int	main()
{
	printf("%d", ft_recursive_factorial(0));
}
