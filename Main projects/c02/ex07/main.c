#include <unistd.h>
char	*ft_strupcase(char *str);


int main ()
{
	char	str[] = "tch2utch:cao";
	
	ft_strupcase(str);

	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	
}
