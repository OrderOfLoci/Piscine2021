#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int main ()
{
	char *str="i54375\n687395";
	
	printf("%d", ft_str_is_lowercase(str));
	
	int i = 0;

	while(str[i])
	{
		write(1,&str[i],1);
		write(1," ",1);
		i++;
	}
	
}
