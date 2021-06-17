/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:48:42 by ishakuro          #+#    #+#             */
/*   Updated: 2021/05/28 09:00:37 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numb(int a, int d)
{
	char b;
	char c;
	char e;
	char f;

	b = a / 10 + '0';
	c = a % 10 + '0';
	e = d / 10 + '0';
	f = d % 10 + '0';
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(' ');
	ft_putchar(e);
	ft_putchar(f);
	if (!(b == '9' && c == '8' && e == '9' && f == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		d;

	a = 00;
	d = 01;
	while (a <= 98)
	{
		d = a + 1;
		while (d <= 99)
		{
			print_numb(a, d);
			d++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
