/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:33:38 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/30 16:49:01 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	to_upper(char c, char d)
{
	if (c == ' ' || c == '\t')
	{
		if (d >= 'a' && d <= 'z')
			return (1);
	}
	return (0);
}

int to_lower(char c, char d)
{
	if (c != ' ' && c != '\t')
	{
		if (d >= 'A' && d <= 'Z' )
			return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	int	i;
	int j;

	j = 1;
	i = 0;

	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				if (argv[j][0] >= 'a' && argv[j][0] <= 'z')
					argv[j][0] = argv[j][0] - 32;
				else if (to_lower(argv[j][i - 1], argv[j][i]) == 1 && i > 0)
					argv[j][i] = argv[j][i] + 32;
				else if (to_upper(argv[j][i - 1], argv[j][i] == 1))
					argv[j][i] = argv[j][i] - 32;
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
}
