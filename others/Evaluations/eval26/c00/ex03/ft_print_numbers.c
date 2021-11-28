/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 06:00:08 by rmendes-          #+#    #+#             */
/*   Updated: 2021/09/22 10:38:00 by rmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	d;

	d = '0';
	while (d <= '9')
	{
		write(1, &d, sizeof(char));
		d++;
	}
}
