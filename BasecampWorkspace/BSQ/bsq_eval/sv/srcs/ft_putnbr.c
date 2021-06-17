/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:57:11 by wvaisane          #+#    #+#             */
/*   Updated: 2021/06/14 13:25:23 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_heads.h"

void	ft_putnbr(int nb)
{
	char temp;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= (-1);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	if (nb >= 10)
	{
		temp = nb % 10;
		ft_putnbr(nb / 10);
		ft_putchar(temp + '0');
	}
}
