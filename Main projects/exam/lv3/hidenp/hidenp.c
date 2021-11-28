/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:11:45 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/30 15:23:23 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int ct;

	i = 0;
	j = 0;
	ct = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			while (argv[2][i] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					ct++;
					break ;
				}
				j++;	
			}
			i++;
		}
		if (ct == i)
			write(1, "1", 1);
		else 
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}
