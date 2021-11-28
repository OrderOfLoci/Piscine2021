/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:19:02 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/21 12:19:56 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	aux;

	aux = 1;
	if (nb < 0)
		return (0);
	if (nb <= 0)
		return (1);
	if (nb > 1)
	{
		aux = nb * ft_recursive_factorial(nb - 1);
	}
	return (aux);
}
