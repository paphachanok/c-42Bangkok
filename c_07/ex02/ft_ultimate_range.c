#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	j;
	int	*v;

	j = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else if ((v = (int *)malloc(sizeof(int) * (max - min))) != NULL)
	{
		while (min < max)
		{
			v[j] = min;
			min++;
			j++;
			*range = v;
		}
	}
	if (v == NULL)
		return (-1);
	return (j);
}

int	main(void)
{
	int i;
	int	end;
	int	*ans;

	end = ft_ultimate_range(&ans, 30, 43);
	i = 0;
	if (end == -1 || end == 0)
	{
		printf("%d", end);
	}
	while (i < end)
	{
		printf("%d", ans[i]);
		i++;
	}
}
