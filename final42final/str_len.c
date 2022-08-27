#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int	main(void)
{
	printf("%d", str_len("Goooddd"));
}
