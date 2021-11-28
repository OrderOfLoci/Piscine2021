/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:02:09 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/14 14:12:00 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	j;
	int	k;

	j = 1;
	i = 0;
	while (j != 0)
	{
		j = 0;
		i = 0;
		while (i < size - 1)
		{	
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				j++;
			}
			i++;
		}
	}
}
