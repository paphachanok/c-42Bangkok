#include <stdio.h>
#include <stdlib.h>

int	ab(int start, int end)
{
	int	x;

	x = end - start;
	if (x < 0)
		return (-x);
	return (x);		
}

int     *ft_rrange(int start, int end)
{
	int	i;
	int	range;
	int	*dest;

	i = 0;
	range = ab(start, end) + 1;
	dest = (int *)malloc((sizeof(int) * range) + 1);
	if (start > end)
	{
		while (range > 0)
		{
			dest[i] = end;
			end++;
			i++;
		}
	}
	else if (start < end)
	{
		while (range > 0)
		{
			dest[i] = end;
			end--;
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	int	*dest;
	int	i;

	i = 0;
	dest = ft_rrange(1, 5);
	while (dest[i])
	{
		printf("%d", dest[i]);
		i++;
	}
}
