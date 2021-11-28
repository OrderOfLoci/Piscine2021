/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:56:07 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/29 15:58:24 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned char reverse_bits(unsigned char octet)
{
	int i;
	unsigned char res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = (2 * res) + (octet % 2);
		i--;
	}
	return (res);
}
