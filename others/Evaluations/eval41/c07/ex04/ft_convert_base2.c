/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:44:00 by josolive          #+#    #+#             */
/*   Updated: 2021/09/29 14:11:41 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	g_i;

int	ft_instr(char a, char *nbr);
int	ft_isnoterror(char *base);
int	ft_gettot(char *nbr, char *base, int basesz);
int	*ft_atoi_base(char *nbr, char *base);

char	*ft_nbrsz(int nbr, int basesz)
{
	int		usnbr;
	int		size;
	char	*ptr;

	size = 1;
	usnbr = nbr;
	if (nbr < 0)
	{
		size++;
		usnbr = -1 * nbr;
	}
	while (usnbr / basesz)
	{
		size++;
		usnbr /= basesz;
	}
	ptr = (char *) malloc(sizeof(char) * size + 1);
	if (ptr != NULL)
		ptr[size] = '\0';
	return (ptr);
}

void	ft_putchar(int nbr, int basesz, char *base, char *ptr)
{
	int	usnbr;

	usnbr = nbr;
	if (nbr < 0)
	{
		ptr[0] = '-';
		g_i++;
		usnbr = -1 * nbr;
	}
	if (usnbr / basesz)
		ft_putchar(usnbr / basesz, basesz, base, ptr);
	ptr[g_i] = base[usnbr % basesz];
	g_i++;
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		basesz;
	char	*ptr;
	char	c;

	c = 'a';
	ptr = &c;
	basesz = 0;
	if (ft_isnoterror(base))
	{
		while (base[basesz])
			basesz++;
		ptr = ft_nbrsz(nbr, basesz);
		g_i = 0;
		ft_putchar(nbr, basesz, base, ptr);
		return (ptr);
	}
	return (NULL);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ptr;
	int		*val;

	val = ft_atoi_base(nbr, base_from);
	if (val == NULL)
		return (NULL);
	ptr = (ft_putnbr_base(*val, base_to));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char	decbase[20] = "0123456789";
	char	hxbase[20] = "0123456789ABCDEF";
	char	*ptr;
	int		i;

//	ptr = (char *) malloc(sizeof(int) * 1);
	ptr = ft_convert_base("\n\t---+7FED", hxbase, decbase);
	i = 0;
	while ((ptr != NULL) && ptr[i])
	{
		write (1, &ptr[i], 1);
		i++;
	}
	puts("");
	puts("");

//	ptr = (char *) malloc(sizeof(int) * 1);
	ptr = ft_convert_base("\n\t---+7FED", "012345F789ABCDEF", "9876543210");
	while ((ptr != NULL) && *ptr)
	{
		write (1, &(*ptr), 1);
		ptr++;
	}
	puts("");
	puts("");

	ptr = ft_convert_base("\n\t---+7FFFFFFF", hxbase, hxbase);
	while ((ptr != NULL) && *ptr)
	{
		write (1, &(*ptr), 1);
		ptr++;
	}
	puts("");
	puts("");

	ptr = ft_convert_base("\n\t---+80000000", hxbase, hxbase);
	while ((ptr != NULL) && *ptr)
	{
		write (1, &(*ptr), 1);
		ptr++;
	}
	puts("");
	puts("");

	ptr = ft_convert_base("\n\t---+7FFFFFFF", hxbase, "01");
	while ((ptr != NULL) && *ptr)
	{
		write (1, &(*ptr), 1);
		ptr++;
	}
	puts("");
	puts("");

	ptr = ft_convert_base("\n\t----+7FED", hxbase, hxbase);
	while ((ptr != NULL) && *ptr)
	{
		write (1, &(*ptr), 1);
		ptr++;
	}
	puts("");
	puts("");

	return (0);
}
/*
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ptr;
	int		*val;
   
//	val = (int *) malloc(sizeof(int) * 1);
	val = ft_atoi_base(nbr, base_from);
//	printf("val= %p\n", val);
	if (val == NULL)
//	{
//		printf("error base1!!!\n");
		return (NULL);
//	}
//	printf("non error base1!!!\n");
	ptr = (ft_putnbr_base(*val, base_to));
//	printf("nbr= %p\n", ptr);
	if (ptr == NULL)
//	{
//		printf("error base2!!!\n");
		return (NULL);
//	}
//	printf("non error base2!!!\n");
	return (ptr);
}
*/
