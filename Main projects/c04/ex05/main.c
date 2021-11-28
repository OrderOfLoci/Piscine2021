#include <stdio.h>

int	base_writer(char *nbr, char *base);
int	ft_atoi(char *str, char *base);

int main()
{
	char base[] = "0123456789abcdef";
	char nb[] ="---2a"; 
	printf("%d", ft_atoi(nb, base));
	printf("\n");
	printf("%d", base_writer(nb, base));
	
}
