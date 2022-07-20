/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:30:43 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/19 14:31:08 by ppoti            ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 0)
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z'))
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

/*int main(void)
{
    char str[10] = "Yellow";
    char str2[10] = "Ye11ow";
    char str3[10];
    char str4[10] = "122345";

    printf("%d\n", ft_str_is_alpha(str));
    printf("%d\n", ft_str_is_alpha(str2));
    printf("%d\n", ft_str_is_alpha(str3));
    printf("%d\n", ft_str_is_alpha(str4));
}*/
