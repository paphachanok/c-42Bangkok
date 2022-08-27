#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	n;

	i = 0;
	result = 0;
	n = 1;
	if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result = result * 10;
		result += str[i] - 48;
		i++;
	}
	return (n * result);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d", ft_atoi(av[1]));
	}
	return (0);
}
