#include <unistd.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char src[20] = " Haderach";
	char dest[40] = "Quizats";

	ft_strcat(dest, src);
	
	int i = 0;
	while (dest[i] != '\0')
	{
		write(1,&dest[i], 1);
		i++;
	}	


}
