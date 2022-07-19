#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	m;

	m = 12;
	ft_ft(&m);
	printf("%d", m);
}
