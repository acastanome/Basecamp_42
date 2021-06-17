/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 19:15:14 by acastano          #+#    #+#             */
/*   Updated: 2021/05/30 17:39:57 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	printf("factorial of 0 is %d, correct 1\n", ft_recursive_factorial(0));
	printf("factorial of 1 is %d, correct 1\n", ft_recursive_factorial(1));
	printf("factorial of 5 is %d, correct 120\n", ft_recursive_factorial(5));
	printf("factorial of -7 is %d, correct 0\n", ft_recursive_factorial(-7));
	return (0);
}
