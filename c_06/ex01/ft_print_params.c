#include<unistd.h>

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		if (i != (argc - 1))
			ft_putchar('\n');
		i++;
	}
}
