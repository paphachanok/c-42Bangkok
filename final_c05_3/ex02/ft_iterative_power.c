/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:04:47 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/30 15:12:13 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(-2, -3));
	printf("%d\n", ft_iterative_power(0, 3));
	printf("%d\n", ft_iterative_power(0, 0));
}*/
