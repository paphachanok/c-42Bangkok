/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:00:27 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/19 10:00:38 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
	}
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	i;
	int	j;

	i = 20;
	j = 6;
	ft_ultimate_div_mod(&i, &j);
	printf("div = %d, mod = %d", i, j);
}*/
