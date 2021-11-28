#include <unistd.h>
void	ft_putstr(char *str, char *test);

int main ()
{
	char *str = "maaaaaan";
	char *test = "";

	ft_putstr(str, test);
	int i = 0;
	while (str[i])
	{
		write(1, &test[i],1);
		i++;
	}
}


