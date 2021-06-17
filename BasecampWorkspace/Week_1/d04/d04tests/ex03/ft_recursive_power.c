/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:13:06 by acastano          #+#    #+#             */
/*   Updated: 2021/05/30 17:48:24 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

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
