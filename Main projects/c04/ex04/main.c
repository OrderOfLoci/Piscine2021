
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);
int	regulator(char *base);

int main(void)
{
	char *base1 = "0123456789abcdef";
	char *base2 = "01";

	ft_putnbr_base(1128, base1);
	printf("\n");
	ft_putnbr_base(-10, base2);


}
