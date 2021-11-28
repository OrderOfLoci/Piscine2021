/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:26:49 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/30 16:58:49 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_prtnbr(int n)
{
	if (n > 9)
		ft_prtnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}


int hex_changer(char *str, int str_base)
{
	int	i;
	int res;
	int signal;

	i = 0;
	res = 0;
	signal = 1;
	if (str[i] == '-')
	{
		signal = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		res = res * str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res = res + str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			res = res + str[i] - 55;
		else if (str[i] >='a' && str[i] <= 'z')
			res = res + str[i] - 87;
		i++;
	}
	return (res);
}
int main()
{
	ft_prtnbr(hex_changer("1F", 4));
}
