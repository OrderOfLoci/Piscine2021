/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:30:05 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/21 12:31:49 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	aux;

	aux = 1;
	if ((nb == 0 && power == 0) || (nb != 0 && power == 0 ))
		return (1);
	if ((nb == 0 && power != 0) || power < 0 )
		return (0);
	if (nb != 0 && power > 0)
		aux = nb * ft_recursive_power(nb, power - 1);
	return (aux);
}
