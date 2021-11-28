/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:02:05 by lliberal          #+#    #+#             */
/*   Updated: 2021/09/29 13:22:00 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_params(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		ft_putchar(a[i]);
		i++;
	}
}	

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		ft_print_params(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
