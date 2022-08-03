/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addprime_sum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:58:33 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/03 15:19:18 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	putnbr(int nb)
{
	char	arr[11];
	int		i;

	i = 0;
	while (nb > 0)
	{
		arr[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	while (i >= 0)
	{
		write(1, &arr[i], 1);
		i--;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}

int	prime_check(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	prime_sum(int nbr)
{
	int	i;
	int	ans;

	i = 2;
	ans = 0;
	while (i <= nbr)
	{
		if (prime_check(i) == 1)
			ans = ans + i;
		i++;
	}
	return (ans);
}

int	main(int ac, char **av)
{
	int	nbr;
	int	sum;

	if (ac == 2 && *av[1] > 1)
	{
		nbr = ft_atoi(av[1]);
		sum = prime_sum(nbr);
		putnbr(sum);
	}
	else
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
	return (0);
}
