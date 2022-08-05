/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:22:36 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/26 14:25:02 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int input)
{
	char	arr[11];
	int		i;

	i = 0;
	if (input == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		input = 147483648;
	}
	else if (input < 0)
	{
		ft_putchar('-');
		input = input * -1;
	}
	else if (input == 0)
		ft_putchar('0');
	while (input > 0)
	{
		arr[i] = (input % 10) + 48;
		input = input / 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(arr[i]);
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(0);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-123);
	write(1, "\n", 1);
	ft_putnbr(123);

}*/
