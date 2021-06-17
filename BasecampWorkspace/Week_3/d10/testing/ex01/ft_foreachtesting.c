/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreachtesting.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:55:49 by acastano          #+#    #+#             */
/*   Updated: 2021/06/09 17:19:34 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}


int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if ((-2147483648 > nb) || (nb > 2147483647))
		return ;
	if (0 > nbr)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar('0' + (nbr % 10));
	return ;
}

int		main(void)
{
	int		array[5] = {1, 2, 20, 13, 42};
	void	(*exf) (int);
	int		length;

	length = 5;
	exf = &ft_putnbr;
	ft_foreach(array, length, exf);
	ft_putchar('\n');
	return (0);
}
