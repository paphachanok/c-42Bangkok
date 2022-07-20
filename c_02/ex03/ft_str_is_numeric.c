/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:31:31 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/19 14:33:41 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (*str != '\0')
	{
		j++;
		str++;
	}
	return (j);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 48 && str[i] <= 57)
				i++;
			else
				return (0);
		}
		return (1);
	}
	else
	{
		return (1);
	}
}

/*int     main()
{
    char str[10] = "Hello";
    char str2[10] = "1234";
    char str3[10] = "He11o";
    char str4[10];

    printf("%d\n", ft_str_is_numeric(str));
    printf("%d\n", ft_str_is_numeric(str2));
    printf("%d\n", ft_str_is_numeric(str3));
    printf("%d", ft_str_is_numeric(str4));
}*/
