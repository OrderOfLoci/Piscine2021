/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:31:58 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/20 12:53:55 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		aux2;
	int		j;

	i = 0;
	aux2 = 0;
	j = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			j = -1 * j;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		aux2 = (str[i] - '0') + (aux2 * 10);
		i++;
	}
	return (j * aux2);
}
