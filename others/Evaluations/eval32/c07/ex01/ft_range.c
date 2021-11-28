/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:33:38 by arocha-l          #+#    #+#             */
/*   Updated: 2021/09/26 17:48:32 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*a;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	a = (int *)malloc(sizeof(int) * range);
	if (a == NULL)
		return (0);
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}

#include <stdio.h>

int		*ft_range(int min, int max);
void	print_test(int *test, int size);

int	main(void)
{
	int *test0;
	int *test1;
	int *test2;
	int *test3;
	int *test4;
	int *test5;

	test0 = ft_range(1, 11);
	printf("\n* test0 (1, 11): ");
	print_test(test0, 10);

	test1 = ft_range(2, 1);
	printf("\n* test1 (2, 1): ");
	print_test(test1, 0);

	test2 = ft_range(3, 3);
	printf("\n* test2 (3, 3): ");
	print_test(test2, 0);

	test3 = ft_range(4, 41);
	printf("\n* test4 (4, 41): ");
	print_test(test3, 37);

	test4 = ft_range(10, -10);
	printf("\n* test4 (10, -10): ");
	print_test(test4, 0);

	test5 = ft_range(-10, 10);
	printf("\n* test5 (min, max): ");
	print_test(test5, 20);

}

void	print_test(int *test, int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		printf("%d - ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}
