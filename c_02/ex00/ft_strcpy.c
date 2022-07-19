/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanupor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:54:36 by kmanupor          #+#    #+#             */
/*   Updated: 2022/07/15 22:07:26 by kmanupor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char src[10] = "Hello?";
	char dest[10];

	printf("%s", ft_strcpy(dest, src));

	/*char str1[10] = "Hello";
	char str2[10];
	strcpy(str2, str1);
	printf("%s", str2);
	return 0;*/
}
