#include <stdio.h>
#include <unistd.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int	size);

int main()
{
	char src[20] = " moms spaghetti";
	char dest[30] = "say what again";
	printf("%d\n", ft_strlcat(dest,src,10));

	int i = 0;
	while (dest[i] != '\0')
	{
		write(1, &dest[i],1);
		i++;
	}



}
