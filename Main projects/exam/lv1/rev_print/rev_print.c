/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:54:44 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/30 17:37:28 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int len;

	i = 0;
	if (argc == 2)
	{
		len = ft_len(argv[1]);
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][len - i - 1], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
