/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_care_first_alpha.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphachanok_ <paphachanok_@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:55:30 by paphachanok       #+#    #+#             */
/*   Updated: 2022/07/23 18:35:08 by paphachanok      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	neg(char *str)
{
	int	k;
	int	i;

	i = 0;
	k = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-')
		{
			k++;
		}
		i++;
	}
	if (k % 2 == 1)
	{
		return (-1);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	new;
	int	onoff;
	int	i;
	int	r;

	i = 0;
	onoff = 0;
	new = 0;
	r = neg(str);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			new = new * 10 + (str[i] - '0');
			i++;
			onoff = 1;
		}
		else if ((str[i] == '+' || str[i] == '-') && onoff == 0)
			i++;
		else if ((str[i] <= 32 || str[i] > 126) && onoff == 0)
			return (0);
		else
			return (new * r);
	}
	return (new * r);
}

// int	main(void)
// {
// 	char	str[] = "---aa21dkk47483647dh";
// 	printf("%d\n",atoi(str));
// 	printf("%d",ft_atoi(str));
// }

int     main(void)
{
    	printf("Expect result :\n");
	printf("-1234\n");
	printf("-2147483648\n");
	printf("-12345\n");
	printf("0\n");
	printf("0\n");
	printf("0\n");
	printf("123456789\n");
	printf("2147483647\n");

    	printf("User   result :\n");
	printf("%d\n",ft_atoi(" ---+--+1234ab567"));
	printf("%d\n",ft_atoi(" \n\r\t\f\v -+-+-+--2147483648"));
	printf("%d\n",ft_atoi("-12345+2"));
	printf("%d\n",ft_atoi(""));
	printf("%d\n",ft_atoi("++- 123"));
	printf("%d\n",ft_atoi(" a123"));
	printf("%d\n",ft_atoi("\t--123456789a"));
	printf("%d\n",ft_atoi(" --++--2147483647"));
    return (0);
}
