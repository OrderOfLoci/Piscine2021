/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:14:49 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/19 14:18:39 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
		ft_strcpy(dest, src, srclen + 1);
	else if (size != 0)
	{
		ft_strcpy(dest, src, size - 1);
		dest[size-1] = '\0';
	}
	return (srclen);	
}
