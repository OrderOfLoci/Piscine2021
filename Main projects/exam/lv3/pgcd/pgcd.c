/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:31:49 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/30 15:43:24 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void denom_find(int a, int b)
{
	int i;
	int	aux;

	i = 1;
	aux = 0;
	while (i < a && i < b)
	{
		if (a % i == 0 &&  b % i == 0)
			aux = i;
		i++;
	}
	printf("%d", aux);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		denom_find(atoi(argv[1]), atoi(argv[2]));
	}
	printf("\n");
}
