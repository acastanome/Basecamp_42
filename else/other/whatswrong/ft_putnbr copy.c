/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:52:28 by acastano          #+#    #+#             */
/*   Updated: 2021/05/31 14:14:52 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		getnbdigits(int nb)
{
	int digits;

	digits = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		digits++;
	}
	return (digits);
}

int		getdivision(int digits)
{
	int division;

	division = 1;
	while (digits > 1)
	{
		division = division * 10;
		digits--;
	}
	return (division);
}

int		getnbtoprint(int nb, int division)
{
	nb = nb / division;
	return (nb);
}

void	ft_putnbr(int nb)
{
	int digits;
	int division;
	char nbtoprint;

	if ((0 > nb) || (nb > 2147483647))
		return ;
	nbtoprint = '0';
	digits = getnbdigits(nb);
	while (digits > 0)
	{
		division = getdivision(digits);
		nbtoprint = nbtoprint + getnbtoprint(nb, division);
		ft_putchar(nbtoprint);
		nb = nb - (nbtoprint * division);
		digits--;
	}
}

int		main(void)
{
	ft_putnbr(5);
	ft_putnbr(-10);
	ft_putnbr(55555555);
	ft_putnbr(0);
	ft_putnbr(1);
	ft_putnbr(-1);
	return (0);
}
