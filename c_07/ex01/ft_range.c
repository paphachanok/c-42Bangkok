#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int *ft_range(int min, int max)
{
	int	*ans;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	else if((ans = (int *)malloc(sizeof(int) * size)) != NULL)
		while (min < max)
		{
			ans[i] = min++;
			i++;
		}
	return (ans);
}

int	main(void)
{
	int index;
	int	size;
	int	*ans = ft_range(300,310);

	size = 10;
	index = 0;
	while (index < size)
	{
		printf("%d", ans[index]);
		index++;
	}
}
