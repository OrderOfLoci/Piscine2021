/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:22:31 by rneves-c          #+#    #+#             */
/*   Updated: 2021/09/11 14:18:55 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int x)
{
	int		ct;

	ct = 0;
	while (ct < x)
	{
		write(1, &c, 1);
		ct ++;
	}
}
