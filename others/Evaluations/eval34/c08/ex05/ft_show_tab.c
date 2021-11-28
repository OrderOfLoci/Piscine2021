/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 11:14:46 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/09/26 11:21:06 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		write(1, str[ind], 1);
		ind++;
	}
}

void	ft_putnbr(int num)
{
	if (num > 9)
		ft_putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	ind;

	ind = 0;
	while (par[ind].str != 0)
	{
		ft_putstr(par[ind].str);
		write(1, "\n", 1);
		ft_putnbr(par[ind].size);
		write(1, "\n", 1);
		ft_putstr(par[ind].copy);
		write(1, "\n", 1);
		ind++;
	}
}
