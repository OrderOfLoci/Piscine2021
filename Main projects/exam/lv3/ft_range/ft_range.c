/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:48:24 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/30 15:33:58 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		*ft_range(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int *)malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}

#include <stdio.h>
int main()
{
	int *s;

	s = ft_range(0,10);
	int i = 0;
	while (s[i])
	{
		printf("%d\n", s[i]);
		i++;
	}
}
