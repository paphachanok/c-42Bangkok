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
	int	i;
	int	r;

	i = 0;
	new = 0;
	r = neg(str);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		new = new * 10 + (str[i] - '0');
		i++;
	}
	return (new * r);
}

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
