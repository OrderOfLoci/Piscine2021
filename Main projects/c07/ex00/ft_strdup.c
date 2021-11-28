#include <stdlib.h>

int	counter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	dest = (char *)malloc((counter(str + 1)) * sizeof(char));
	i = 0;
	if (!(str) || !(dest))
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
