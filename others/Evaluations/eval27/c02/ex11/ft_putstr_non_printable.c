/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsr_non_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:57:49 by gpacient          #+#    #+#             */
/*   Updated: 2021/09/22 12:53:15 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	print_non_printable(int i);
void	print_ascii(int i);
void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			if (str[i] < 0)
			{
				print_non_printable(str[i] + 256);
			}
			else
			{
				print_non_printable(str[i]);
			}
		}
		i ++;
	}
}

void	print_non_printable(int i)
{
	ft_putchar('\\');
	print_ascii(i / 16);
	print_ascii(i % 16);
}

void	print_ascii(int i)
{
	if (i < 10)
		ft_putchar('0' + i);
	else
		ft_putchar('a' + i - 10);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str);

int main()
{
	char *str = "Cocou\nu vas bien? Chevalie\tur";
	ft_putstr_non_printable(str);
}
