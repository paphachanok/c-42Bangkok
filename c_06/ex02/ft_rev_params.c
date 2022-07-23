#include<unistd.h>

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		if (i > 1)
				ft_putchar('\n');
		i--;
	}
	return (0);
}
