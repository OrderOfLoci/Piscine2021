/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:35:03 by nandre-f          #+#    #+#             */
/*   Updated: 2021/09/22 14:54:39 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	a;
	int	sinal;
	int	num;

	a = 0;
	sinal = 1;
	num = 0;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == 32)
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sinal *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		num = (str[a] - '0') + (num * 10);
		a++;
	}
	return (num * sinal);
}

#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));

}
