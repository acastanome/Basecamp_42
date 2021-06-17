/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 19:48:30 by acastano          #+#    #+#             */
/*   Updated: 2021/05/30 17:45:41 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_iterative_power(int nb, int power)
{
	int		calc;
	int		i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	calc = nb;
	i = power - 1;
	while (i--)
		calc *= nb;
	return (calc);
}

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
