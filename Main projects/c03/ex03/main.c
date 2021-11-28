#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char src[20] = " moms spaghetti";
	char dest[30] = "say what again";
	ft_strncat(dest, src, 5);
	int i = 0;

	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
}
