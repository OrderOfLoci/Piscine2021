/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:57:20 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/15 17:09:13 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	counter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ex;
	int	j;

	j = counter(str);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			ex = 1;
		}
		else
		{
			ex = 0;
			break ;
		}
		i++;
	}
	if (j == 0)
	{
		ex = 1;
	}
	return (ex);
}
