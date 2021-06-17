/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:39:22 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/06/08 13:46:41 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my_header.h"

int		operations(int a, char b, int c)
{
	int result;
	int (*pointer[5]) (int, int);

	pointer[0] = &sum_nums;
	pointer[1] = &minus_nums;
	pointer[2] = &div_nums;
	pointer[3] = &mul_nums;
	pointer[4] = &mod_nums;
	if (b == '+')
		result = (pointer[0])(a, c);
	if (b == '-')
		result = (pointer[1])(a, c);
	if (b == '/')
		result = (pointer[2])(a, c);
	if (b == '*')
		result = (pointer[3])(a, c);
	if (b == '%')
		result = (pointer[4])(a, c);
	return (result);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long copy;

	copy = nb;
	if ((-2147483648 > nb) || (nb > 2147483647))
		return ;
	if (copy < 0)
	{
		ft_putchar('-');
		copy *= -1;
	}
	if (copy > 9)
		ft_putnbr(copy / 10);
	ft_putchar('0' + (copy % 10));
}

int		ft_atoi(char *str)
{
	int minus;
	int i;
	int result;

	i = 0;
	minus = 1;
	result = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] <= '9' && str[i] >= '0' && str[i] != '\0')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (minus * result);
}
