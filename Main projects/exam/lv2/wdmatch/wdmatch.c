/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:14:18 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 16:39:47 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int leng(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
void	print_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int aux;

	i = 0;
	aux = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i++] != '\0')
		{
			while (argv[2][j++] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					aux++;
					break ;		
				}
			}
		}
		if (aux == leng(argv[1]))
			print_str(argv[1]);
	}
	write(1, "\n", 1);
}
