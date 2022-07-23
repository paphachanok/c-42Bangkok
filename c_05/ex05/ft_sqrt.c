#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		if (i * i != nb)
		{
			i++;
		}
		else
			return (i);
	}
	return (0);
}

int	main(void)
{
	printf("rak = %d\n", ft_sqrt(-60));
}
