/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:51:35 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/09/15 18:53:14 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

bool	is_in_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

bool	is_whiteispace(char c)
{
	return (is_in_string(c, "\t\n\v\f\r "));
}

bool	is_operator(char c)
{
	return (is_in_string(c, "+-"));
}

bool	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	result;
	int	minus;

	result = 0;
	minus = 1;
	while (is_whitespace(*str))
		str++;
	while (is_operator(*str))
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (is_number(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * minus);
}
