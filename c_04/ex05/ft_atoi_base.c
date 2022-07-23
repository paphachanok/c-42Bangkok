#include<unistd.h>
#include<stdio.h>

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
		else if ((str[i] < '0' || str[i] > '9') && onoff == 0)
			i++;
		else
			return (new * r);
	}
	return (new * r);
}

int	err(char *base)
{
	int	len;
	int	j;
	int	i;

	i = 0;
	len = 0;
	while (base[len] != '\0')
	{
		len++;
	}
	if (len > 1)
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

char	*ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	v;
	char	*result;

	v = 0;
	len = 0;
	while (base[len] != '\0')
	{
		len++;
	}
	if (err(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -1 * nbr;
			ft_putnbr_base(nbr, base);
		}
		else if (nbr < len)
			result[v++] = base[nbr];
		else if (nbr >= len)
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	ai;
	char	*put;
	int	ans;

	ai = ft_atoi(str);
	put = ft_putnbr_base(ai ,base);
	ans = ft_atoi(put);
	return (ans);
}

int	main(void)
{
	char	str[2] = "20";
	char	base[7] = "0123456";
	printf("%d", ft_atoi_base(str, base));
}
