#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int		i;
	int	len;
	char	*dest;

	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	dest = (char *)malloc((sizeof(char) * len) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	printf("%s", ft_strdup("Heloooo"));
}
