/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:01:29 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/27 18:33:20 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	s1[] = {"whatwhatwhat"};
	char	s2[] = {"whatwhat"};
	if (ft_strcmp(s1, s2) == 0)
		write (1, "the lines are identical", 23);
	else
		write (1, "the lines are different", 23);
		write(1, "\n", 1);
	return (0);
}

