/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:16:45 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/06/08 13:36:48 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int	main(int ac, char **av)
{
	int av1;
	int av3;
	int result;

	if (check_acav(ac, av) == 0)
		return (0);
	av1 = ft_atoi(av[1]);
	av3 = ft_atoi(av[3]);
	result = operations(av1, av[2][0], av3);
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
