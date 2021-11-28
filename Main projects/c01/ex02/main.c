#include <stdio.h>

void ft_swap(int *a, int *b);

int main ()

{
	int x = 42;
	int y = 24;
	
	int *a;
	int *b;

	a = &x;
	b = &y;

	*a = 36;
	*b = 55;

	printf("%d\n" ,*a);
	printf("%d\n", *b);

	ft_swap(a, b);

}
