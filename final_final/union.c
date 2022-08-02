/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:29:52 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/02 15:59:31 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_for_union(char *str1, char c2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == c2)
			return (0);
		i++;
	}
	return (1);
}

int	check_common(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (check_common(av[1], av[1][i], i) == 1)
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][j] != '\0')
		{
			if (check_common(av[2], av[2][j], j) == 1)
			{
				if (check_for_union(av[1], av[2][j]) == 1)
					write(1, &av[2][j], 1);
			}
			j++;
		}

	}
	write (1, "\n", 1);
	return (0);
}
