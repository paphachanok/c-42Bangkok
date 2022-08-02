/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:07:21 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/03 00:27:33 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	absolute(int nb)
{
	if (nb < 0)
		nb *= -1;
	return (nb);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;
	int	*d;
	int	range;

	i = 0;
	range = absolute(max - min) + 1;
	if (max - min == 0)
	{
		dest = (int *)malloc(sizeof(int) * 1);
		dest[0] = min;
		return (dest);
	}
	dest = (int *)malloc(sizeof(int) * range);
	d = dest;
	if (min > max)
	{
		while (range >= 0)  //!!! must not use ((max - min + 1) >= 0)
		{
			d[i] = min;
			i++;
			min--;
			range--;
		}
	}
	else if (min < max)
	{
		while (range >= 0)
		{
			d[i] = min;
			i++;
			min++;
			range--;
		}
	}
	return (dest);
}

int	main(void)
{
	int	i = 0;
	int	*dest;

	dest = ft_range(0, 0);
	while (i < 1)
	{
		printf("%d\n", dest[i]);
		i++;
	}
}
