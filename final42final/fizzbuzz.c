#include <unistd.h>

void	ft_putnbr(int	i)
{
	if (i <= 9)
	{
		i = i + 48;
		write(1, &i, 1);
	}
	else if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			ft_putnbr(i);
		}
		i++;
		write(1, "\n", 1);
	}
}
