/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:29:08 by nandre-f          #+#    #+#             */
/*   Updated: 2021/09/22 14:59:25 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool	is_base_valid(char *str)
{
	char	*curr;
	int		index;
	int		jndex;

	curr = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (false);
	while (*curr)
	{
		if (*curr == '\t' || *curr == '\n' || *curr == '\v' || *curr == '\f'
			|| *curr == '\r' || *curr == ' ' || *curr == '+' || *curr == '-')
			return (false);
		curr++;
	}
	index = 0;
	while (index < curr - str)
	{
		jndex = index + 1;
		while (jndex < curr - str)
			if (str[index] == str[jndex++])
				return (false);
		index++;
	}
	return (true);
}

void	ft_putnbr_base_recursive(int nbr, char *base, int radix)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_base_recursive(nbr / radix, base, radix);
		write(1, &(base[-(nbr % radix)]), 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-nbr, base, radix);
		return ;
	}
	if (nbr > radix - 1)
		ft_putnbr_base_recursive(nbr / radix, base, radix);
	write(1, &(base[nbr % radix]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	if (!is_base_valid(base))
		return ;
	radix = ft_strlen(base);
	ft_putnbr_base_recursive(nbr, base, radix);
}
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	char base[] = "point.";
	unsigned long c;

	c = 0;
	while (c < (sizeof(base) - 1))
	{
		ft_putnbr_base(c, base);
		c++;
	}
	c = 0;
	while (c < (sizeof(base) - 1))
	{
		ft_putnbr_base(c, base);
		c++;
	}
	printf("\n");
	ft_putnbr_base(-1, base);
	printf("\n");
}
