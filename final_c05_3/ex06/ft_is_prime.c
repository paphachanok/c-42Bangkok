/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:55:53 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/01 23:37:00 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= nb / 2)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
		printf("%d\n", ft_is_prime(2147483647));
		printf("%d\n", ft_is_prime(2));
}
