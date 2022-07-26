#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*ft(const char *src)
{
	char	*ans;
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	if((ans = malloc(sizeof(char) * (size))) == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		ans[i] = src[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

int	main(void)
{
	char	*ans;

	ans = ft("idhjfj");
	while (*ans != '\0')
	{
		write(1, ans++, 1);
	}
	return (0);
}
