/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:37:47 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/30 20:50:14 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	a = s1[i];
	b = s2[i];
	while (a == b)
	{
		a = s1[i];
		b = s2[i];
		i++;
		if (a == '\0' && b == '\0')
			return (0);
	}
	return (a - b);
}

void	sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = ac - 1;
	while (i > 0)
	{
		j = 1;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				tmp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = tmp;
			}
			j++;
		}
		i--;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 2)
	{
		sort(ac, av);
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
