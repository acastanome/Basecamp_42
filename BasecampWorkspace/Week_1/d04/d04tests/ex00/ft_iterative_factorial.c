/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:51:09 by acastano          #+#    #+#             */
/*   Updated: 2021/05/30 15:31:35 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int a;
	int i;

	a = 1;
	i = 1;
	if (nb >= 0 && nb <= 13)
	{
		while (i <= nb)
			a *= i + 1;
		return (a);
	}
	else
	{
		return (0);
	}
}

int		main(void)
{
	printf("factorial of 0 is %d, correct 1\n", ft_iterative_factorial(0));
	printf("factorial of 1 is %d, correct 1\n", ft_iterative_factorial(1));
	printf("factorial of 5 is %d, correct 120\n", ft_iterative_factorial(5));
	//printf("factorial of 13 is %d, correct 0\n", ft_iterative_factorial(13));
	printf("factorial of -7 is %d, correct 0\n", ft_iterative_factorial(-7));
	return (0);
}
