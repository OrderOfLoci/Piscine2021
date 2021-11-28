/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:03:00 by rneves-c          #+#    #+#             */
/*   Updated: 2021/09/15 08:31:25 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_start(char ant);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (check_start(str[i - 1]) == 0)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i ++;
	}
	return (str);
}

int	check_start(char ant)
{
	if ((ant >= 'a' && ant <= 'z') || (ant >= 'A' && ant <= 'Z'))
	{
		return (0);
	}
	else if (ant >= '0' && ant <= '9')
	{
		return (0);
	}
	return (1);
}
