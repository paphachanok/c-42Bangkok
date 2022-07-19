#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main()
{
	int	i;
	int	j;

	i = 3;
	j = 1;
	swap(&i, &j);
	printf("%d, %d", i, j);
}*/
