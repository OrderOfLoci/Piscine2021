/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:06:56 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 15:27:29 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc,char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (argv[1][i] == ' ' && argv[1][i] == '\t')
			i--;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
}

/*#include <unistd.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--;
		while (ft_isblank(*av[1]))
			av[1]--;
		while (*av[1] && !ft_isblank(*av[1]))
			av[1]--;
		av[1]++;
		while (*av[1] && !ft_isblank(*av[1]))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}*/
