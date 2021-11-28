/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:35:25 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/12 13:49:43 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	ne;
	char	po;

	ne = 'N';
	po = 'P';
	if (n < 0)
	{
		write(1, &ne, 1);
	}
	if (n >= 0)
	{
		write(1, &po, 1);
	}
}
