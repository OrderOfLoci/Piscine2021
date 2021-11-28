/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:40:53 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/30 17:18:58 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int aux;

	i = 0;
	aux = 0;
	
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			aux = 1;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				aux = argv[1][i] - 'A' + 1;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				aux = argv[1][i] - 'a' + 1;
			while (aux)
			{
				write(1, &argv[1][i], 1);
				aux--;
			}
			
			i++;
		}
	}
}
