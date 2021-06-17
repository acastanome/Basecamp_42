/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alltests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:51:09 by acastano          #+#    #+#             */
/*   Updated: 2021/05/30 15:19:21 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//ex00

int	ft_iterative_factorial(int nb);

int		main(void)
{
	printf("factorial of 0 is %d, correct 1\n", ft_iterative_factorial(0));
	printf("factorial of 1 is %d, correct 1\n", ft_iterative_factorial(1));
	printf("factorial of 13 is %d, correct 120\n", ft_iterative_factorial(13));
	printf("factorial of -7 is %d, correct 0\n", ft_iterative_factorial(-7));
	return (0);
}

//ex01
int	ft_recursive_factorial(int nb);

int		main(void)
{
	printf("factorial of 0 is %d, correct 1\n", ft_recursive_factorial(0));
	printf("factorial of 1 is %d, correct 1\n", ft_recursive_factorial(1));
	printf("factorial of 13 is %d, correct 120\n", ft_recursive_factorial(13));
	printf("factorial of -7 is %d, correct 0\n", ft_recursive_factorial(-7));
	return (0);
}

//ex02
int	ft_iterative_power(int nb, int power);

int		main(void)
{
	printf("0 ^ 1 is %d, correct 0\n", ft_iterative_power(0, 1));
	printf("0 ^ 0 is %d, correct 1\n", ft_iterative_power(0, 0));
	printf("2 ^ 4 is %d, correct 16\n", ft_iterative_power(2, 4));
	printf("2 ^ -7 is %d, correct 0\n", ft_iterative_power(2, -7));
	printf("2 ^ 1 is %d, correct 2\n", ft_iterative_power(2, 1));
	printf("2 ^ 0 is %d, correct 1\n", ft_iterative_power(2, 0));
	return (0);
}

//ex03
int	ft_recursive_power(int nb, int power);

int		main(void)
{
	printf("0 ^ 1 is %d, correct 0\n", ft_recursive_power(0, 1));
	printf("0 ^ 0 is %d, correct 1\n", ft_recursive_power(0, 0));
	printf("2 ^ 4 is %d, correct 16\n", ft_recursive_power(2, 4));
	printf("2 ^ -7 is %d, correct 0\n", ft_recursive_power(2, -7));
	printf("2 ^ 1 is %d, correct 2\n", ft_recursive_power(2, 1));
	printf("2 ^ 0 is %d, correct 1\n", ft_recursive_power(2, 0));
	return (0);
}
