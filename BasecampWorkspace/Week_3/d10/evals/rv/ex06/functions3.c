/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:42:40 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/06/08 13:46:49 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int		check_acav(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (*av[2] == '/' && *av[3] == '0')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (*av[2] == '%' && *av[3] == '0')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	if (*av[2] != '+' && *av[2] != '-' && *av[2] != '*' &&
	*av[2] != '/' && *av[2] != '%')
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	return (1);
}
