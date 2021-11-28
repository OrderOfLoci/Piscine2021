/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:02:30 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 09:12:19 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verifier(char c, char d)
{
	if (c >= 32 && c < 127)
	{
		if (d == ' ' || d == '\t' || d == '\0')
			return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			if (verifier(argv[1][i], argv[1][i + 1]) == 1)
				break ;
			i++;
		}
	}
	write(1, "\n", 1);
}
