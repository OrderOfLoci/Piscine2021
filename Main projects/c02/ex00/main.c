#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int main ()
{
	char src[8] ="atreides";
	char dest[8];
	ft_strcpy(dest,src);
	int c = 0;
	while (dest[c])
	{
		write(1,&dest[c],1);
		c++;
	}
}
