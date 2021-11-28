#include "ft_stock_str.h"

void write_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	write_nbr(int	nbr)
{
	if (nbr > 9)
		write_nbr(nbr / 10);
	else
		write(1, &"0123456789"[nbr % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_put_string(par[i].str);
		ft_put_string("\n");
		ft_put_number(par[i].size);
		ft_put_string("\n");
		ft_put_string(par[i].copy);
		ft_put_string("\n");
		i++;
	}
};
