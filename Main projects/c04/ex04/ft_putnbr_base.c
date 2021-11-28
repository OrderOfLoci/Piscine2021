/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:48:29 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/20 12:52:44 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	counter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	regulator(char *base)
{
	int	i;

	i = 0;
	if (counter(base) == 0 || counter(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == base[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	base_writer(int nbr, char *base)
{
	int	i;
	int	aux;

	i = 0;
	if (nbr >= counter(base))
	{
		aux = nbr % counter(base);
		base_writer(nbr / (counter(base)), base);
		write(1, &base[aux], 1);
	}
	if (nbr < counter(base))
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	aux;

	aux = regulator(base);
	if (aux == 1)
	{
		if (nbr < 0)
		{
			nbr = -1 * nbr;
			write(1, "-", 1);
		}
		base_writer(nbr, base);
	}
}
