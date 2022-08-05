/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:04:50 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/27 15:37:06 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	err(char *base)
{
	int	j;
	int	i;

	i = 0;
	if (ft_strlen(base) > 1)
	{
		while (base[i] != '\0')
		{
			if (base[i] < 32 || base[i] >= 127
				|| base[i] == '+' || base[i] == '-')
				return (0);
			j = i + 1;
			while (base[j] != '\0')
			{
				if (base[i] != base[j])
					j++;
				else
					return (0);
			}
			i++;
		}
		return (1);
	}
	return (0);
}

void	ft_putnbr_base_old(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (err(base) == 1)
	{
		if (nbr == -2147483648)
		{
			nbr = nbr / len;
		}
		if (nbr < 0 && nbr != -2147483648)
		{
			write(1, "-", 1);
			nbr = -1 * nbr;
		}
		if (nbr < len)
			ft_putchar(base[nbr]);
		if (nbr >= len)
		{
			ft_putnbr_base_old(nbr / len, base);
			ft_putnbr_base_old(nbr % len, base);
		}
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	a;

	len = ft_strlen(base);
	ft_putnbr_base_old(nbr, base);
	if (nbr == -2147483648)
	{
		a = ((nbr % len) * -1) + '0';
		write(1, &a, 1);
	}
}

/*int	main(void)
{
	int	nbr = -2147483648;
	char	base[] = "01";
	ft_putnbr_base(nbr, base);
}*/
