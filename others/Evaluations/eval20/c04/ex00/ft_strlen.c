/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:47:25 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/09/15 17:23:39 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	unsigned int	ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		ind++;
	}
	return (ind);
}
