/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:26:49 by jrebelo-          #+#    #+#             */
/*   Updated: 2021/09/13 10:28:19 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	putchar(char c);
void	count(int i, int j);

void	ft_print_comb2(void)
{
	int	j;
	int	i;

	i = 0;
	while (i <= 98 )
	{
		j = i + 1;
		while (j <= 99 )
		{
			count(i, j);
			j++;
		}
		i++;
	}
}

void	count(int i, int j)
{
	if (i != 98 )
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
		putchar(',');
		putchar(' ');
	}
	else
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
	}
}

void	putchar(char c)
{
	write(1, &c, 1);
}
