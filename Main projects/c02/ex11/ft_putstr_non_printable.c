/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:22:07 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/16 13:22:19 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(int aux);

void	hex(int aux)
{
	char	c;

	if (aux < 10)
	{
		c = '0' + aux;
		write(1, &c, 1);
	}
	else
	{
		c = 'a' + aux - 10;
		write(1, &c, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	aux;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str [i] > 126)
		{
			if (str[i] < 0)
				aux = str[i] + 256;
			else
			{
				aux = str[i];
			}
			write(1, "\\", 1);
			hex(aux / 16);
			hex(aux % 16);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
