/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:14:25 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/02 05:40:51 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	dest = (int *)malloc((max - min) * sizeof(int) + 1);
	if (min >= max)
		return (0);
	while (i < (max - min))
	{
		dest[i] = min + i;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 11;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
