#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[10] = "aadfghjk";
	char	str2[10] = "SFGJLa";
	char	str3[10] = "FhFjPl";

	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str2));
	printf("%s", ft_strupcase(str3));
}*/
