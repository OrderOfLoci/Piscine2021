/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:40:23 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 14:51:36 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_db(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != 0)
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					if (check_db(argv[1], argv[1][i], i) == 1)
					{
						write(1, &argv[1][i], 1);
						break ;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
