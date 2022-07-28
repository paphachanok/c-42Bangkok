/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 00:31:36 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/29 00:49:45 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_double(char *str, char c, int pos)
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

void	inter(char *av1, char *av2)
{
	int	i;
	int	j;

	i = 0;
	while (av1[i] != '\0')
	{
		j = 0;
		while (av2[j] != '\0')
		{
			if (av1[i] == av2[j])
			{
				if (check_double(av1, av1[i], i) == 1)
				{
					write(1, &av1[i], i);
					break;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}
