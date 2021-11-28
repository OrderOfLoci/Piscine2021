#include <unistd.h>
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

char	*spliter(char *str, int nb);

int main()
{
	char str[] = "01225345678259";
	char to_find[] = "225";
	
	printf("%s",ft_strstr(str,to_find ));
	

	
}
