/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:06:28 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/04 22:25:51 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int nb)
{
	int	i;

	i = 2;
	while (nb >= i)
	{
		if (nb / i == 0)
		{
			printf("%d", i);
				if (nb != i)
					printf("*");
			nb = nb / i;
			i--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2 && av[1] > 0)
	{
		if (av[1] == 1)
			printf("1");
		else if (av[1] > 1)
			fprime(av[1]);
	}
	printf("\n");
}
