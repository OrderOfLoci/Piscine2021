/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 06:46:21 by rmendes-          #+#    #+#             */
/*   Updated: 2021/09/22 10:53:09 by rmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	num;

	if (n < 0)
	{
		num = 'N';
	}
	else
	{
		num = 'P';
	}
	write(1, &num, 1);
}