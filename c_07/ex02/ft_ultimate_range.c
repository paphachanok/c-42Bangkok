/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:29:58 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/31 17:05:27 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	dest = (int *)malloc((max - min) * sizeof(int) + 1);
	*range = dest;
	if (!dest)
	{
		*range = 0;
		return (-1);
	}
	while (i < (max - min))
	{
		dest[i] = min + i;
		i++;
	}
	dest[i] = '\0';
	return (max - min);
}

/*int	main(void)
{
	int	*range;

	printf("%d", ft_ultimate_range(&range, 2, 32));

}*/
