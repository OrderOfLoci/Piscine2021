/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:49:28 by rneves-c          #+#    #+#             */
/*   Updated: 2021/09/15 07:34:52 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	cpy_less_n(char *src, char *dest, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	size;
	unsigned int	i;

	size = 0;
	while (src[size] != '\0')
	{
		size ++;
	}
	if (size < n)
	{
		cpy_less_n(src, dest, n);
	}
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i ++;
	}
	return (dest);
}

void	cpy_less_n(char *src, char *dest, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}	
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}
}
