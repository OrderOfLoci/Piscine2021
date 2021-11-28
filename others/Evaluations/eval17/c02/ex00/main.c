#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int main ()
{
	char src[9] ="atreides";
	char dest[9];
	ft_strcpy(dest,src);
	int c = 0;
	while (dest[c])
	{
		write(1,&dest[c],1);
		c++;
	}
}
