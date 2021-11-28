/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:04:15 by rneves-c          #+#    #+#             */
/*   Updated: 2021/09/15 08:38:48 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_non_printable(char c);
char	decimal_to_hexadecimal(int i);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
		{
			write(1, &str[i], 1);
		}
		else
		{
			print_non_printable(str[i]);
		}
		i ++;
	}
}

void	print_non_printable(char c)
{
	int		i;
	char	first;
	char	scnd;

	if (c == 127)
	{
		write(1, "\\7f", 3);
	}
	else
	{
		i = c;
		write(1, "\\", 1);
		scnd = decimal_to_hexadecimal(i % 16);
		i /= 16;
		first = decimal_to_hexadecimal(i % 16);
		write(1, &first, 1);
		write(1, &scnd, 1);
	}
}

char	decimal_to_hexadecimal(int i)
{
	char	ar[6];

	ar[0] = 'a';
	ar[1] = 'b';
	ar[2] = 'c';
	ar[3] = 'd';
	ar[4] = 'e';
	ar[5] = 'f';
	if (i < 10)
	{
		return (i + '0');
	}
	else
	{
		i = i % 10;
		return (ar[i]);
	}
}
