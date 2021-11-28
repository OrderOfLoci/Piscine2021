/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:12:36 by josolive          #+#    #+#             */
/*   Updated: 2021/09/29 14:16:45 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	g_i;
int	g_j;
int	g_k;
int	g_m;

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

int	ft_wrdnbr(char *str, char *charset)
{
	int	i;
	int	tot;

	tot = 0;
	i = 0;
	while (str[i])
	{
		if (ft_instr(str[i], charset))
			i++;
		else
		{
			while (str[i] && !ft_instr(str[i], charset))
				i++;
			tot++;
		}
	}
	return (tot);
}

char	**ft_mkstr(char *str, char *charset, char **split)
{	
	g_i = 0;
	g_j = 0;
	while (str[g_i])
	{
		if (ft_instr(str[g_i], charset))
			g_i++;
		else
		{
			while (str[g_i] && !ft_instr(str[g_i], charset))
			{
				g_m = 1;
				while (str[g_i] && !ft_instr(str[g_i], charset))
				{
					g_m++;
					g_i++;
				}
				split[g_j++] = (char *) malloc(sizeof(char) * g_m + 1);
			}
		}
	}
	split[g_j] = NULL;
	return (split);
}

char	**ft_splstr(char *str, char *charset, char **split)
{	
	g_i = 0;
	g_j = 0;
	while (str[g_i])
	{
		if (ft_instr(str[g_i], charset))
			g_i++;
		else
		{
			while (str[g_i] && !ft_instr(str[g_i], charset))
			{
				g_k = 0;
				while (str[g_i] && !ft_instr(str[g_i], charset))
					split[g_j][g_k++] = str[g_i++];
				split[g_j][g_k] = '\0';
				g_j++;
			}
		}
	}
	split[g_j] = NULL;
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		wrds;

	split = NULL;
	wrds = ft_wrdnbr(str, charset);
	split = (char **) malloc(sizeof(char *) * wrds + 1);
	if (split != NULL)
	{
		split = ft_mkstr(str, charset, split);
		split = ft_splstr(str, charset, split);
	}
	return (split);
}

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char	**split = NULL;
	int 	i;
	int		j;

//	split = ft_split("abcdefghij", "adgj");
	split = ft_split("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
		   	In tempus dui quis maximus finibus.)", "Lpn");
	i = 0;
	while (split[i])
	{
		j = 0;
		if (split[i])
			printf("split[%d]= %p, *split[%d]= ", i, split[i], i);
		while (split[i][j])
			printf("%c", split[i][j++]);
		puts("");
		i++;
	}
	printf("split[%d]= %p, *split[%d]= ", i, split[i], i);
	
	return (0);
}
