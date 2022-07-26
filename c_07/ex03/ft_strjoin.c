#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*ans_strs;
	char	*ans_sep;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (sep[j])
		j++;
	if ((ans_strs = (int *)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while (size > 0)
	{
		ans_strs[i] = strs[i];
		i++;
		j = 0;
		while (j > (size - 1))
		{
			ans_sep[j] = sep[j];
			j++;
			return (ans_sep);
		}
		size--;
	}
	ans_strs++;
	return (ans_strs);
}

int	main(void)
{
	int	size;
	char	strs[0] = "Hello";
	char	strs[1] = "mother";
	char	strs[2] = "fucker";
	char	sep = "ab";

	i = 0;
	if (end == -1 || end == 0)
	{
		printf("%d", end);
	}
	while (i < size)
	{
		end = ft_strjoin(&size, strs, sep);
		printf("%d", ans[i]);
		i++;
	}
}
