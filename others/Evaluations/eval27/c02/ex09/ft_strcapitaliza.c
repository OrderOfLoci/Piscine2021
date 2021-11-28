/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitaliza.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:23:14 by gpacient          #+#    #+#             */
/*   Updated: 2021/09/22 12:46:51 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_alphanumeric(char aln);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (ft_check_alphanumeric(str[i - 1]) == 0)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	ft_check_alphanumeric(char aln)

{
	if ((aln >= 'A' && aln <= 'Z') || (aln >= 'a' && aln <= 'z'))
	{
		return (0);
	}		
	if (aln >= '0' && aln <= '9')
	{
		return (0);
	}
	 return (1);
}

char	*ft_strcapitalize(char *str);

#include <unistd.h>
int main ()
{
	char	str[] = "salut, comment tu vas? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);

	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

}
