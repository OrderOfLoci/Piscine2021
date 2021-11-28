/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsr_non_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:49:58 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/19 14:17:26 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c > 16)
	{
		ft_print_hex(c / 10);
		ft_print_hex(c % 10);
	}
	else
		ft_putchar(hex[c]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
