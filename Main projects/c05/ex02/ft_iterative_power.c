/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:20:06 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/21 12:27:31 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	aux;

	i = 0;
	aux = 1;
	if ((nb == 0 && power != 0) || power < 0 )
		return (0);
	if ((nb == 0 && power == 0) || (nb != 0 && power == 0))
		return (1);
	while (i < power && power > 0)
	{
		aux = aux * nb;
		i++;
	}
	return (aux);
}
