/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:31:10 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 15:38:23 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int i;
	int aux;

	i = 0;
	aux = 1;
	while (i < (len - 1))
	{
		if (tab[i] < tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}
#include <stdio.h>
int main()
{
	int c[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("%d", max(c, 9));
}
