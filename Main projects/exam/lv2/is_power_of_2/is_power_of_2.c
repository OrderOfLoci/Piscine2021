/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:53:42 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 15:01:17 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	is_power_of_2(unsigned int n)
{
	unsigned long i;

	i = 1;
	while (i < 0xFFFFFFFF )
	{
		if (i == n)
			return (1);
		i = 2 * i;
	}
	return (0);
}

int main()
{
	printf("%d", is_power_of_2(32));
}
