/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:51:29 by ishakuro          #+#    #+#             */
/*   Updated: 2021/05/28 08:56:04 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numb(char c, char d, char e)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(e);
	if (!(c == '7' && d == '8' && e == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char e;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			e = d + 1;
			while (e <= '9')
			{
				print_numb(c, d, e);
				e++;
			}
			d++;
		}
		c++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
