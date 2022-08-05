/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:43:10 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/26 15:31:46 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	a = s1[i];
	b = s2[i];
	while (a == b)
	{
		a = s1[i];
		b = s2[i];
		i++;
		if (a == '\0' && b == '\0')
			return (0);
	}
	return (a - b);
}

/*int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "abca";

	printf("original: %d\n", strcmp(s1, s2));
	printf("my funcq: %d\n", ft_strcmp(s1, s2));
	
	if (ft_strcmp(s1, s2) < 0)
		printf("s1 < s2");
	else if (ft_strcmp(s1, s2) == 0)
		printf("s1 == s2");
	else
		printf("s1 > s2");
}*/
