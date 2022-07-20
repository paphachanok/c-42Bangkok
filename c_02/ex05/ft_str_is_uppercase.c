/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:35:29 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/19 14:35:55 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
		str++;
	}
	return (j);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				i++;
			else
				return (0);
		}
		return (1);
	}
	else
		return (1);
}

/*int	main(void)
{
	char	str[10] = "ASDFGH";
	char	str2[10] = "aaaaHg";
	char	str3[10] = "12345H";
	char	str4[10];

	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d", ft_str_is_uppercase(str4));
}*/
