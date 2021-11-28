/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:16:18 by gpacient          #+#    #+#             */
/*   Updated: 2021/09/22 12:42:47 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i]) >= 'a' && (str[i]) <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
#include <unistd.h>
char	*ft_strupcase(char *str);


int main ()
{
	char	str[] = "tch2utch:cao";

	ft_strupcase(str);

	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

}

