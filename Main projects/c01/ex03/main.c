#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a;
	int b;
	int *div;
	int *mod;
	div = &a;
	mod = &b;

	ft_div_mod(50,4,div,mod);
}
