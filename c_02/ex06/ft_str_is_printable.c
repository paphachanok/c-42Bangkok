#include <stdio.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
		str++;
	}
	return (j);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) > 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 0 && str[i] <= 127)
				i++;
			else
				return (0);
		}
		return (1);
	}
	else
		return (1);
}

/*int	main(void)
{
	char	str[10] = "iop[jkl";
	char	str2[10] = "267390*^";
	char	str3[10] = "!@#$^&)_+";
	char	str4[10];

	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d", ft_str_is_printable(str4));
}*/
