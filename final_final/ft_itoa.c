/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:58:01 by ppoti             #+#    #+#             */
/*   Updated: 2022/08/04 21:24:14 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(int	nbr)
{
	int	i;

	i = 1;  //don't use 0
	if (nbr < 0)
	{
		i++;  // just count it, we'll skip '-' in ft_itoa
		nbr = nbr * -1;

	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

int	ft_div(int	len)
{
	int	digit;

	digit = 1;	// don't use 0
	if (len == 1)
		return (1);
	while (len > 1)
	{
		digit = digit * 10;  // 0 * 10 is always 0
		len--;
	}
	return (digit);
}

char	*ft_itoa(int nbr)
{
	int	i;
	int	len;
	int	len_to_count;
	char	*result;

	i = 0;
	len = ft_len(nbr);
	len_to_count = len;
	result = (char *)malloc((sizeof(char) * len) + 1);
	if (result == NULL)
		return (NULL);
	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
		i++;
		len--;
	}
	while (i < len_to_count)
	{
		result[i] = ((nbr / ft_div(len)) % 10) + 48;
		len--;
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	main(void)
{
	printf("%s", ft_itoa(-123));
}
