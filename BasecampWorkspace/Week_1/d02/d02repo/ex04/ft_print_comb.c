/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 20:16:08 by acastano          #+#    #+#             */
/*   Updated: 2021/05/28 18:42:23 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char b;

	b = '0';
	char m;

	m = '0';
	char s;

	s = '0';
	while (b <= '9')
	{
		ft_putchar(b);
		while (m <= '9')
		{
			ft_putchar(m);
			while(s <= '9')
			{
				ft_putchar(s);
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
