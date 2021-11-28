/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:44:00 by josolive          #+#    #+#             */
/*   Updated: 2021/09/29 14:08:55 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_instr(char a, char *nbr)
{
	int	i;

	i = 0;
	while (*nbr)
	{
		if (a == *nbr)
			return (i + 1);
		i++;
		nbr++;
	}
	return (0);
}

int	ft_isnoterror(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (ft_instr(base[i], "+-\t\n\v\f\r "))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	if (i <= 1)
		return (0);
	i = 0;
	return (-1);
}

int	ft_gettot(char *nbr, char *base, int basesz)
{
	int	total;
	int	total0;

	total = 0;
	total0 = 0;
	while (ft_instr(*nbr, base))
	{	
		total0 = total;
		total = basesz * total + ft_instr(*nbr, base) - 1;
		nbr++;
	}
	if (total >= total0)
		return (total);
	return (-999);
}

int	*ft_ptrtot(int signal, int total)
{
	int	*ptr;

	ptr = (int *) malloc(sizeof(int) * 1);
	if (ptr != NULL)
	{
		if (total < 0)
			ptr = NULL;
		else
			*ptr = signal * total;
	}
	return (ptr);
}

int	*ft_atoi_base(char *nbr, char *base)
{
	int	signal;
	int	basesz;
	int	total;
	int	*ptr;

	signal = 1;
	basesz = 0;
	if (ft_isnoterror(base))
	{
		while (base[basesz])
			basesz++;
		while (ft_instr(*nbr, "\t\n\v\f\r "))
			nbr++;
		while (ft_instr(*nbr, "+-"))
		{
			if (*nbr == '-')
				signal *= -1;
			nbr++;
		}
		total = ft_gettot(nbr, base, basesz);
		ptr = ft_ptrtot(signal, total);
	}
	else
		ptr = NULL;
	return (ptr);
}
