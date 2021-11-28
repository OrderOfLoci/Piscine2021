/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 05:17:55 by gpacient          #+#    #+#             */
/*   Updated: 2021/09/22 11:42:48 by gpacient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_non_printable(int i);
void	print_ascii(int i);
void	ft_putchar(char c);

void	ft_print_memory(void *addr, unsigned int size);
{
	unsigned int	size;

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
