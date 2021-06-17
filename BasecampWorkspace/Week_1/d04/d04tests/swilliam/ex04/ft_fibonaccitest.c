/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonaccitest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:13:06 by acastano          #+#    #+#             */
/*   Updated: 2021/05/30 18:22:34 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	int fibonacci;
	
	fibonacci = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	else
	{
		fibonacci = ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
	}
	return (fibonacci);
}

int		main(void)
{
	printf("%d should be 0\n", ft_fibonacci(0));
	printf("%d should be 1\n", ft_fibonacci(1));
	printf("%d should be 1\n", ft_fibonacci(2));
	printf("%d should be 2\n", ft_fibonacci(3));
	printf("%d should be 3\n", ft_fibonacci(4));
	printf("%d should be 5\n", ft_fibonacci(5));
	printf("%d should be 8\n", ft_fibonacci(6));
	printf("%d should be 13\n", ft_fibonacci(7));
	return(0);
}