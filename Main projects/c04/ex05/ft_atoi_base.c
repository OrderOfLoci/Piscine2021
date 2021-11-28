#include <unistd.h>
int	g_i;

int search(char *str, char c)
{
	g_i = 0;
	while(str[g_i] != '\0')
	{
		if (str[g_i] == c)
			break;
		g_i++;
	}
	return (g_i);
}

int	regulator(char *base)
{
	int aux;

	g_i = 0;
	aux = 0;

	while (base[aux] != '\0')
		aux++;
	if (aux == 0 || aux == 1)
		return (0);
	while (base[g_i] != '\0')
	{
		if(base[g_i] == '+' || base[g_i] == '-')
			return (0);
		if(base[g_i] == base[g_i + 1])
			return (0);
		g_i++;
	}
	return (1);
}

int	power(int x, int e)
{
	int	b;

	g_i = 1;
	b = 1;
	while (g_i <= e)
	{
		b = b * x;
		g_i++;
	}
	if (e == 0)
	{
		b = 1;
	}
	return (b);
}

int	base_writer(char *nbr, char *base)
{
	int	aux;
	int	aux2;
	int aux3;
	int aux4;

	g_i = 0;
	aux = 0;
	aux2 = 0;
	aux4 = 0;
	while(base[aux] != '\0')
		aux++;
	while(nbr[aux2] != '\0')
		aux2++;
	while (g_i < aux2)
	{
		aux3 = search(base,nbr[g_i]);
		aux4 = aux4 + (aux3 * power(aux, aux2 - g_i - 1));
		g_i++;
	}
	return (aux4);
}

int ft_atoi(char *str, char *base)
{
	int		aux2;
	int		k;
	char	c[] = "";
	int		x;

	g_i = 0;
	aux2 = regulator(base);
	x = 0;
	if (aux2 == 1)
	{
		while ((str[g_i] >= '\t' && str[g_i] <= '\r') || str[g_i] == ' ')	
			g_i++;
		while (str[g_i] != '\0' && (str[g_i] == '-' || str[g_i] == '+'))
		{	
			if (str[g_i] == '-')
				aux2 = -1 * aux2;
			g_i++;
		}
		while (str[g_i] != '\0' )
		{
			k = 0;
			while (base[k] != '\0')
			{
				if (base[k] == str[g_i])
				{
					c[x]=base[k];
					x++;
					break ;
				}	
				k++;
			}
			g_i++;
		}
		return (aux2 * base_writer(c, base));
	}
	return (0);
}
