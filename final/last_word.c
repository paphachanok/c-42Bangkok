#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	char	*last;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] > 32 && av[1][i - 1] <= 32)
			{
				last = &av[1][i];
			}
			i++;
		}
		i = 0;
		while (last && last[i] != '\0')
		{
			write(1, &last[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
