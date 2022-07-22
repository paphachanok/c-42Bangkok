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
	int	len;
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (err(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -1 * nbr;
			ft_putnbr_base(nbr, base);
		}
		else if (nbr < len)
			ft_putchar(base[nbr]);
		else if (nbr >= len)
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
	}
}

int	main(void)
{
	int	nbr = -15;
	char	base[] = "0123+56";
	ft_putnbr_base(nbr, base);
}
