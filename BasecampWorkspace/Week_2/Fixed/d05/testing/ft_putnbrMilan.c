/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrMilan.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:52:28 by acastano          #+#    #+#             */
/*   Updated: 2021/06/01 10:04:35 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void    ft_putnbr(int nb)
{
    if (nb <= 2147483647 || nb >= -2147483648)
    {
        if (nb == -2147483648)
        {
            ft_putnbr(nb / 10);
            ft_putchar(56);
        }
        if (nb < 0 && nb != -2147483648)
        {
            nb = -nb;
            ft_putchar('-');
        }
        if (nb > 9)
        {
            ft_putnbr(nb / 10);
        }
        ft_putchar('0' + nb % 10);
    }
}

int		main(void)
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(1);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(6546548);
	ft_putchar('\n');
	ft_putnbr(500);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	/*ft_putnbr(2147483648);
	ft_putchar('\n');*/
	return (0);
}
