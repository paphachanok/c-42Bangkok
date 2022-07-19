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

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				i++;
			else
				return (0);
		}
		return (1);
	}
	else
	{
		return (1);
	}
}
/*
int main(void)
{
    char str[10] = "asdfghj";
    char str2[10] = "asdfHghj";
    char str3[10] = "1234a";
    char str4[10];

    printf("%d\n", ft_str_is_lowercase(str));
    printf("%d\n", ft_str_is_lowercase(str2));
    printf("%d\n", ft_str_is_lowercase(str3));
    printf("%d", ft_str_is_lowercase(str4));
}*/
