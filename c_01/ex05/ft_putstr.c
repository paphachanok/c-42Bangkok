#include <unistd.h>

/*void	ft_putchar(char z)
{
	write(1, &z, 1);
}*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}

	int	i;

	/*i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}*/
}

int	main()
{
	ft_putstr("Hell");
	write(1, "\n", 1);
}
