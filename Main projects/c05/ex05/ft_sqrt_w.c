/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:35:36 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/21 12:42:16 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	start;
	int	mid;
	int	end;
	int ans;

	start = 1;
	end = nb;
	if (nb < 0 || nb == 0)
		return (0);
	while (start <= end)
	{
		mid = start + ((end - start) / 2);
		if (mid <= nb / mid)
		{
			ans = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	return (ans);
}
