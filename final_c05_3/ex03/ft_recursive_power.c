/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:34:55 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/30 15:38:26 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power == 0)
		return (1);
	else if (power > 0)
		result = nb * ft_recursive_power(nb, (power - 1));
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_recursive_power(-2, 3));
}*/
