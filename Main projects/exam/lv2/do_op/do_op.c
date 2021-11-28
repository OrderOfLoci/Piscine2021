/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:09:45 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 13:37:08 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	char	c;
	int aux1;
	int aux2;

	if (argc == 4)
	{
		aux1 = atoi(argv[1]);
		aux2 = atoi(argv[3]);
		c = argv[2][0];
	
		if (c == '+')
			printf("%d\n", aux1 + aux2);
		else if (c == '-')
			printf("%d\n", aux1 - aux2);
		else if (c == '*')
			printf("%d\n", aux1 * aux2);
		else if (c == '/')
			printf("%d\n", aux1 / aux2);
		else if (c == '%')
			printf("%d\n", aux1 % aux2);
	}
	else
		write(1, "\n", 1);
}
