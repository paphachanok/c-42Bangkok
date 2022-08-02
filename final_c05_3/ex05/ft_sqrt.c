/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:16:02 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/30 21:21:06 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int			rerm;
	long long	klang;
	int			jobb;

	rerm = 0;
	jobb = nb;
	while (rerm <= jobb)
	{
		klang = (rerm + jobb) / 2;
		if (klang * klang == nb)
			return (klang);
		else if (klang * klang < nb)
			rerm = klang + 1;
		else if (klang * klang > nb)
			jobb = klang - 1;
	}
	return (0);
}

/*int	main(void)
{
		printf("%d\n", ft_sqrt(-4112)); 
		printf("%d\n", ft_sqrt(0)); 
		printf("%d\n", ft_sqrt(1)); 
		printf("%d\n", ft_sqrt(1640045925)); 
		printf("%d\n", ft_sqrt(2147395600)); 
}*/
