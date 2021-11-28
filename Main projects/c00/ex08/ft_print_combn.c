/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:42:09 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/12 13:18:56 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arr_inc(int l[9], int n);

void	arr_prin(int l[9], int n);

void	ft_print_combn(int n);

void	ft_print_combn(int n)
{
	int	l[9];
	int	i;

	i = 0;
	while (i < n)
	{
		l[i] = i;
		i ++;
	}
	while (l[0] != 10 - n)
	{
		arr_prin(l, n);
		arr_inc(l, n);
	}
	arr_prin(l, n);
}

void	arr_prin(int l[9], int n)
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = '0' + l[i];
		write(1, &c, 1);
		i ++;
	}
	if (l[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	arr_inc(int l[9], int n)
{
	int	i;

	i = n - 1;
	while (l[i] == 10 - n + i)
	{
		i --;
	}
	l[i]++;
	while (i++ < n)
	{
		l[i] = l[i - 1] + 1;
	}
}
