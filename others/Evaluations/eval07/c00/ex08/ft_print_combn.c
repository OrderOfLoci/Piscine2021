/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:10:23 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/11 21:18:04 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	array_increment(int u[9], int n);
void	array_print(int u[9], int n);

void	ft_print_combn(int n)
{
	int	u[9];
	int	i;

	i = 0;
	while (i < n)
	{
		u[i] = i;
		i ++;
	}
	while (u[0] != 10 - n)
	{
		array_print(u, n);
		array_increment(u, n);
	}
	array_print(u, n);
}

void	array_print(int u[9], int n)
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = '0' + u[i];
		write(1, &c, 1);
		i ++;
	}
	if (u[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	array_increment(int u[9], int n)
{
	int	i;

	i = n - 1;
	while (u[i] == 10 - n + i)
	{
		i --;
	}
	u[i]++;
	while (i++ < n)
	{
		u[i] = u[i - 1] + 1;
	}
}
