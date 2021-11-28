/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:50:07 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/30 17:11:32 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prtnum(int n)
{
	if (n > 9)
		prtnum(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res);
}

int main(int argc, char **argv)
{
	int i;
	int aux;
	
	i = 1;
	if (argc == 2)
	{
		aux = ft_atoi(argv[1]);
		while (i <= 9)
		{
			prtnum(i);
			write(1, " x ", 3);
			prtnum(aux);
			write(1, " = ", 3);
			prtnum(aux * i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
