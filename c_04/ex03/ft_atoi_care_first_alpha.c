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
		else if (str[i] < '0' || str[i] > '9' && onoff == 0)
			return (0);
		else
			return (new * r);
	}
	return (new * r);
}

int	main(void)
{
	char	str[] = "---aa21dkk47483647dh";
	printf("%d\n",atoi(str));
	printf("%d",ft_atoi(str));
}
