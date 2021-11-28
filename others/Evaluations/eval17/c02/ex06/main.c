#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

int main ()
{
	char *str="abc\127";
	
	printf("%d", ft_str_is_printable(str));
	
	int i = 0;

	while(str[i])
	{
		write(1,&str[i],1);
		write(1," ",1);
		i++;
	}
	
}
