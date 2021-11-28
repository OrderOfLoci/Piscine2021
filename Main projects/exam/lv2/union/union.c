/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:02:02 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 16:13:36 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_db(char *str, char c, int ps)
{
	int i;

	i = 0;
	while (i < ps)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int check_db2(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (check_db(argv[1], argv[1][i], i) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (check_db2(argv[1], argv[2][i]) == 1)
			{
				if (check_db(argv[2], argv[2][i], i) == 1)
					write(1, &argv[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
