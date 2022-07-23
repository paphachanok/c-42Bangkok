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
	ft_putstr(argv[0]);
}
