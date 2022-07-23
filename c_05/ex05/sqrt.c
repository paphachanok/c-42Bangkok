#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	rerm;
	int job;
	int klang;
	int kum;

	rerm = 0;
	job = nb;

	while (rerm <= job)
	{
		klang = (rerm + job) / 2;
		if (klang * klang == nb)
		{
			kum = klang;
			return (kum);
		}
		else if (klang * klang > nb)
		{
			job = klang - 1;
		}
		else if (klang * klang < nb)
		{
			kum = rerm;
			rerm = klang + 1;
		}
	}
	return (0);
}

int	main(void)
{
	printf("rak = %d\n", ft_sqrt(10000));
}
