/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:03:34 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/28 23:16:43 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char x)
{
	write(1, &x, 1);
}

void putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if  (ac == 4 && (av[2][1] == '\0' && av[3][1] == '\0'))
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			i++;
		}
		putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
