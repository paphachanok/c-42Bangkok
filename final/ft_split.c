#include <stdio.h>
#include <stdlib.h>

int	count_alpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32)
			i++;
		else if (str[i] > 32)
		{
			count++;
			i++;
		}
	}
	return (count);
}

char	*ft_a_word(char *str, int position)
{
	char	*a_word;
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[position] > 32)
	{
		len++;
		position++;
	}
	position = position - len;
	a_word = (char *)malloc((sizeof(char) * len) + 1);
	while (len > 0)
	{
		a_word[i] = str[position];
		i++;
		position++;
		len--;
	}
	return (a_word);
}

char    **ft_split(char *str)
{
	int	i;
	int	j;
	char	**dest;
	char	**d;

	i = 0;
	j = 0;
	dest = (char **)malloc((sizeof(char *) * count_alpha(str)) + 1);
	d = dest;
	if (str[i] <= 32)
		i++;
	while (str[i] != '\0')
	{
		if (i == 0 || (str[i] != '\0' && str[i - 1] <= 32))
		{
			dest[j] = ft_a_word(str, i);
			j++;
		}
		i++;
	}
	return (d);
}

int	main(int ac, char **av)
{
	int	i;
	char	**str;

	i = 0;
	str = ft_split(av[1]);
	if (ac == 2)
	{
		while (str[i])
		{
			printf("%s\n", str[i]);
			i++;
		}
	}
	return (0);
}
