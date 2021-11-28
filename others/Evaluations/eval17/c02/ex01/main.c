#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main ()
{
	char src[9]="atreides";
	char dest[9];
	ft_strncpy(dest,src,4);
	int c = 0;
	while (dest[c])
	{
		write(1,&dest[c],1);
		c++;
	}
}

