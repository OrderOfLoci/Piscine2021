/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:28:55 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/24 14:18:37 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	comparer(char *x, char *y)
{
	int	i;

	i = 0;
	while (x[i] != '\0' && y[i] != '\0')
	{
		if (x[i] != y[i])
		{
			break ;
		}
		i++;
	}
	return (x[i] - y[i]);
}

void	printer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc - 1)
		{
			if (comparer(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				i = 0;
			}
		}
		i = 0;
		while (++i < argc)
		{
			printer(argv[i]);
			write(1, "\n", 1);
		}
	}	
	return (0);
}
