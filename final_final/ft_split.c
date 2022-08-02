/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:54:27 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/03 04:00:29 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_str(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 32)
			count++;
		i++;
	}
	return (count);
}

char	*ft_a_word(char *str, int position)
{
	int		i;
	int		len;
	char	*a_word;

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
	a_word[i] = '\0';
	return (a_word);
}

char	**ft_split(char *str)
{
	char	**dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dest = (char **)malloc(sizeof(char *) * (count_str(str) + 1));
	while (str[i] != '\0')
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (i == 0 || (str[i] != '\0' && str[i - 1] == 32))
		{
			dest[j] = ft_a_word(str, i);
			j++;
		}
		i++;
	}
	dest[j] = 0;
	return (dest);
}

/*int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
	printf("%d\n", index);
}*/
