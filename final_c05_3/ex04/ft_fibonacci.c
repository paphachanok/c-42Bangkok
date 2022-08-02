/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:03:49 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/30 13:15:24 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = -1;
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 0)
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_fibonacci(8));
}*/
