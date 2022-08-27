#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ' && av[1][i + 1] > 32)
				count = i;
			i++;
		}
		while (av[1][count + 1] > 32 && av[1][count + 1] != '\0')
		{
			write(1, &av[1][count + 1], 1);
			count++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
