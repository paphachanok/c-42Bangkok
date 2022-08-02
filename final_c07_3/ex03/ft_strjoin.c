/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:16:50 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/02 06:24:54 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	strlen_all(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	ans;

	i = 0;
	ans = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
		}
		i++;
		ans = ans + j;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	return (ans + (i * (size - 1)));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*dest;

	i = -1;
	c = 0;
	if (size <= 0)
	{
		dest = (char *)malloc(1 * sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc(strlen_all(size, strs, sep) * sizeof(char) + 1);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
				dest[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < (size - 1))
				dest[c++] = sep[j++];
	}
	dest[c] = '\0';
	return (dest);
}

int	main(void)
{
	char *text[10];
	char *dest;

	text[0] = "Testando";
	text[1] = "a";
	text[2] = "funcao";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separador";
	text[7] = "iii";
	text[8] = "e tamanho";
	text[9] = "10";

	dest = ft_strjoin(10, text, "  o|o  ");
	printf("%s\n", dest);
}
