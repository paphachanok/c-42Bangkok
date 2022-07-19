#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	i;
	int	j;

	i = 20;
	j = 6;
	ft_div_mod(20, 6, &i, &j);
	printf("div = %d, mod = %d", i, j);
}
