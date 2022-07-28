/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 00:02:46 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/29 00:13:48 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	result;

	result = 0;
	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		if (av[2][0] == '+')
			result = a + b;
		else if (av[2][0] == '-')
			result = a - b;
		else if (av[2][0] == '*')
			result = a * b;
		else if (av[2][0] == '/')
			result = a / b;
		else if (av[2][0] == '%')
			result = a % b;
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
