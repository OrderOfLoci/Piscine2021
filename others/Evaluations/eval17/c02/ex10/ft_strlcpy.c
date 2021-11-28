/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 08:50:38 by rneves-c          #+#    #+#             */
/*   Updated: 2021/09/15 08:32:36 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	size_of(char *string);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;

	size_src = 0;
	while (src[size_src] != '\0')
	{
		size_src ++;
	}
	i = 0;
	while (i < size - 1)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			break ;
		}
		i ++;
	}
	dest[i] = '\0';
	return (size_src);
}
