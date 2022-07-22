#include<stdio.h>

int	ft_fibonacci(int index)
{
	int	r;
	if (index >= 0)
	{
		if (index == 0)
			r = 0;
		else if (index == 1)
			r = 1;
		else
			r = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (r);
	}
	return (-1);
}

int	main(void)
{
	printf("%d",ft_fibonacci(1));
}
