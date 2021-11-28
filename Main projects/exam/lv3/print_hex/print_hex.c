/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:45:03 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/30 15:53:34 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnum (int n)
{
	if (n > 16)
		printnum(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int	atoi(char *str)
{
	int	i;
	int res;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (10 * res) + (str[i] - '0');
		i++;
	}
	return (res);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printnum(atoi(argv[1]));
	}
	write(1, "\n", 1);
}
