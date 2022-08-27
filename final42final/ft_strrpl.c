#include <unistd.h>

void	ft_strrpl(char *str, char c1, char c2)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c1)
			str[i] = c2;
		i++;
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	//return (str);
}

int	main(void)
{
	char	*str;
//	char	*dest;
	char	c1;
	char	c2;
//	int	i;

//	i = 0;
	str = "abcdeff";
	c1 = 'f';
	c2 = 'u';
	ft_strrpl(str, c1, c2);
	/**dest = ft_strrpl(str, c1, c2);

	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}*/
}
