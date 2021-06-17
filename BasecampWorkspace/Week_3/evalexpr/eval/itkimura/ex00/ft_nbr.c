/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 19:43:03 by itkimura          #+#    #+#             */
/*   Updated: 2021/06/13 20:34:38 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_calculator(int n1, int n2, char argv)
{
	int (*p[4])(int, int);
	int result;

	p[0] = &ft_add;
	p[1] = &ft_sub;
	p[2] = &ft_mul;
	p[3] = &ft_div;
	if (argv == '+')
		result = p[0](n1, n2);
	else if (argv == '-')
		result = p[1](n1, n2);
	else if (argv == '*')
	{
		result = p[2](n1, n2);
	}
	else
		result = p[3](n1, n2);
	return (result);
}

void	ft_putnbr(int nb)
{
	long i;

	i = nb;
	if (i < 0)
	{
		i *= -1;
		ft_putchar('-');
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}

void	ft_error(int n1, int n2, char argv)
{
	int result;

	if (argv == '/' && !n2)
		ft_putstr("Stop : division by zero");
	else if (argv == '%' && !n2)
		ft_putstr("Stop : modulo by zero");
	else
	{
		result = ft_calculator(n1, n2, argv);
		ft_putnbr(result);
	}
}
