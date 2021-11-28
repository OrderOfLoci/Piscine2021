/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:48:03 by rmendes-          #+#    #+#             */
/*   Updated: 2021/09/22 10:42:19 by rmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void);

char	g_f = '0';
char	g_s = '1';
char	g_t = '2';
int		g_i = 0;

void	ft_print_comb(void)
{
	while (g_i == 0 )
	{
		write(1, &g_f, 1);
		write(1, &g_s, 1);
		write(1, &g_t, 1);
		g_t++;
		if (g_t > '9' )
		{
			g_s++;
			g_t = g_s + 1;
			if (g_s > '8' )
			{
				g_f++;
				g_s = g_f + 1;
				g_t = g_s + 1;
				if (g_f > '7' )
					break ;
			}
		}
		if (!(g_f > '7' && g_s > '8' && g_t > '9'))
			write(1, ", ", 2);
	}
}
