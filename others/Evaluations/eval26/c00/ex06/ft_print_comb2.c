/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 22:12:38 by rmendes-          #+#    #+#             */
/*   Updated: 2021/09/22 12:02:40 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);

char	g_f = '0';
char	g_s = '0';
char	g_t = '0';
char	g_u = '1';

void	ft_set(void)
{
	write(1, &g_f, 1);
	write(1, &g_s, 1);
	write(1, &" ", 1);
	write(1, &g_t, 1);
	write(1, &g_u, 1);
	if (!(g_f == '9' && g_s == '8'))
		write(1, ", ", 2);
}

void	ft_logic(void)
{
	if (g_u == g_s)
		g_u = g_s + 1;
	if (g_u > '9' )
	{
		g_t++;
		g_u = '0';
		if (g_t > '9' )
		{
			g_s++;
			g_t = g_f;
			g_u = g_s + 1;
			if (g_s > '9')
			{
				g_f++;
				g_s = '0';
				g_t = g_f;
				g_u = g_s + 1;
			}		
		}
	}	
}

void	ft_print_comb2(void)
{
	while (!(g_f == '9' && g_s == '9' ))
	{
		ft_set();
		g_u++;
		ft_logic();
	}	
}

void	ft_print_comb2(void);

int		main(void)
{
	ft_print_comb2();
	return(0);
}
