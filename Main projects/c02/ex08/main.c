#include <unistd.h>
char	*ft_strlowercase(char *str);


int main ()
{
	char	str[12] = "TCHUTCHUCAO";
	
	ft_strlowercase(str);
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	
}
