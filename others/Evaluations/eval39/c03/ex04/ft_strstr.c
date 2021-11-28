/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:46:39 by doliveir          #+#    #+#             */
/*   Updated: 2021/09/27 00:08:23 by doliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	t;

	s = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[s] != '\0')
	{
		t = 0;
		while (str[s + t] != '\0' && str[s + t] == to_find[t])
		{
			if (to_find[t + 1] == '\0')
				return (&str[s]);
			t++;
		}
		s++;
	}
	return (0);
}
