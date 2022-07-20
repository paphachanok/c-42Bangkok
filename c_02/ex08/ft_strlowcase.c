/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:40:57 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/19 14:43:02 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[10] = "ADGUKLP";
	char	str2[10] = "ADaajJJ";
	char	str3[10] = "afgjPPZ";

	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s", ft_strlowcase(str3));
}*/
