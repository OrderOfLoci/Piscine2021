/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:31:18 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 14:39:43 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	ct;
	int	i;
	char c;

	i = 0;
	ct = 0;
	while (str[ct] != '\0')
		ct++;
	while (i < (ct / 2))
	{
		c = str[i];
		str[i] = str[ct - i - 1];
		str[ct - i - 1] = c;
		i++;
	}
	return (str);
}

int main()
{
	char c[100] = "cara";

	printf("%s", ft_strrev(c));
}
