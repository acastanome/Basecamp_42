/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:53:36 by ishakuro          #+#    #+#             */
/*   Updated: 2021/05/28 09:06:02 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numb(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	print_numb(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		print_numb(-nb);
	}
	else
	{
		print_numb(nb);
	}
}

int		main(void)
{
	ft_putnbr(333333333333);
	return (0);
}
