/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 07:34:51 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/30 21:37:13 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	a;
	unsigned char	b;

	a = '0';
	b = '0';
	while (a == b && n > 0)
	{
		a = *s1++;
		b = *s2++;
		if (a == '\0')
			return (a - b);
		n--;
	}
	return (a - b);
}

/*int	main(void)
{
	char	s1[] = "\200";
	char	s2[] = "\0";
	unsigned int	n = 5;

	printf("original: %d\n", strncmp(s1, s2, n));
	printf("my funcq: %d\n", ft_strncmp(s1, s2, n));
}*/
