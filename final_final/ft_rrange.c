/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:27:45 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/03 00:45:52 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int	ab(int nb)
{
	if (nb < 0)
		nb *= -1;
	return (nb);
}

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*dest;
	int	*d;
	int	range;

	i = 0;
	range = ab(end - start) + 1;
	if (start == end)
	{
		dest = (int *)malloc(sizeof(int) * 1);
		dest[0] = 0;
		return (dest);
	}
	dest = (int *)malloc((sizeof(int) * range) + 1);
	d = dest;
	if (start > end)
	{
		while (range >= 0)
		{
			dest[i] = end;
			i++;
			end++;
			range--;
		}
	}
	else if (start < end)
	{
		while (range >= 0)
		{
			dest[i] = end;
			i++;
			end--;
			range--;
		}
	}
	return (d);
}

int	main(void)
{
	int	i = 0;
	int	*dest;

	dest = ft_rrange(0, 0);
	while (i < 1)
	{
		printf("%d, ", dest[i]);
		i++;
	}
}
