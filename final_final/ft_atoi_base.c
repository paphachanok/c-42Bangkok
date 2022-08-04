/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:44:39 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/04 20:36:12 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	n;
	int	result;

	i = 0;
	result = 0;
	n = 1;
	if (str[0] == '-')
	{
		n = -1;
		i = i + 1;
	}
	while (str[i] != '\0')
	{
		result = result * str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result = result + (str[i] - 48);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result = result + (str[i] - 55);
		else if (str[i] >= 'a' && str[i] <= 'z')
			result = result + (str[i] - 87);
		i++;
	}
	return (result);
}

int	main(void)
{
	printf("%d", ft_atoi_base("3c", 16));
}
