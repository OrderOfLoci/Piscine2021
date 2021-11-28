/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 03:43:33 by rmendes-          #+#    #+#             */
/*   Updated: 2021/09/22 10:48:36 by rmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	t_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	d;

	d = 'a';
	while (d <= 'z')
	{
		write(1, &d, sizeof(char));
		d ++;
	}
}
