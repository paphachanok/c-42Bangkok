#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	n;
	int	result;

	i = 0;
	n = 1;
	result = 0;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result = result * str_base;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result + (str[i] - 48);
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			result = result + (str[i] - 55);
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			result = result + (str[i] - 87);
		}
		i++;
	}
	return (result);
}

int	main(void)
{
	printf("%d", ft_atoi_base("3c", 16));
}
