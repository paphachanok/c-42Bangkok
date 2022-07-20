/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:43:51 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/20 15:19:52 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] < '0' || (str[j] > '9' && str[j] < 'A')
			|| (str[j] > 'Z' && str[j] < 'a') || str[j] > 'z')
			i = 0;
		else if (i == 0 && (str[j] >= 'a' && str[j] <= 'z'))
		{
			str[j] = str[j] - 32;
			i++;
		}
		else if (i > 0 && (str[j] >= 'A' && str[j] <= 'Z'))
		{
			str[j] = str[j] + 32;
			i++;
		}
		else
			i++;
		j++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[100] = "saluT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));

}*/
