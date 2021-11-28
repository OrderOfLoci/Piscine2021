/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:56:40 by josolive          #+#    #+#             */
/*   Updated: 2021/09/29 14:07:07 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_join(int size, char **strs, char *sep, char *jstr)
{
	int	i;
	int	j;
	int	tot;

	tot = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			jstr[tot++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				jstr[tot++] = sep [j++];
		}
		i++;
	}
	jstr[tot] = '\0';
}

char	*ft_null(void)
{
	char	*jstr;

	jstr = (char *) malloc(sizeof(char) * 1);
	if (jstr != NULL)
		jstr[0] = '\0';
	return (jstr);
}

char	*ft_strj(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		tot;
	char	*jstr;

	tot = 0;
	while (sep[tot])
		tot++;
	tot = (size - 1) * tot;
	i = 0;
	while ((i < size) && strs[i])
	{
		j = 0;
		while (strs[i][j++])
			tot++;
		i++;
	}
	size = i;
	jstr = (char *) malloc(sizeof(char) * (tot + 1));
	if (jstr != NULL)
		ft_join(size, strs, sep, jstr);
	return (jstr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*jstr;

	if (size == 0)
		jstr = ft_null();
	else
		jstr = ft_strj(size, strs, sep);
	return (jstr);
}

// #include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char	str1[20] = "Lorem";
	char	str2[20] = "ipsum";
	char	str3[20] = "dolor";
	char	str4[20] = "sit";
	char	str5[20] = "amet";
	char	sep[20] = " - ";
	char	*ptr[10];
	char	**strs = ptr;
	char	*jstr;
	int		i;

	ptr[0] = &str1[0];
	ptr[1] = &str2[0];
	ptr[2] = &str3[0];
	ptr[3] = &str4[0];
	ptr[4] = &str5[0];
	ptr[5] = NULL;
	i = 1;
	while (i < 10)
	{	
		jstr = ft_strjoin(i, strs, sep);
		while (*jstr)
		{
			write(1, jstr, 1);
			jstr++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

