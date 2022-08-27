#include <stdio.h>
#include <stdlib.h>

int	ft_num(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 32 || str[i] == 127))
			//printf("%c", str[i]);
			count++;
		i++;
	}
	return (count);
}

int	ft_for_null(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 && str[i - 1] > 32)
			//printf("%c", str[i]);
			count++;
		i++;
	}
	return (count + 1);
}

char	*a_word(char *str, int position)
{
	int	i;
	int	j;
	char	*word;

	i = 0;
	j = 0;
	while (str[position] > 32)
	{
		i++;
		position++;
	}
	position = position - i;
	word = (char *)malloc((sizeof(char) * i) + 1);
	while (i > 0)
	{
		word[j] = str[position];
		j++;
		position++;
		i--;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	alpha_num;
	char	**dest;

	i = 0;
	j = 0;
	alpha_num = ft_num(str) + ft_for_null(str);
	dest = (char **)malloc((sizeof(char *) * alpha_num) + 1);
	while (str[i] != '\0')
	{
		if (i == 0 || (str[i] > 32 && str[i -1] <= 32))
		{
			dest[j] = a_word(str, i);
			j++;
		}
		i++;
	}
	dest[j] = 0;
	return (dest);
}

int	main(int ac, char **av)
{
	int	i;
	char	**dest;

	i = 0;
	if (ac == 2)
	{
		dest = ft_split(av[1]);
		while (dest[i] != 0)
		{
			printf("%s", dest[i]);
			i++;
		}
	}
	// if (ac == 2)
	// {
	// 	printf("num: %d", num(av[1]));
	// }
}
