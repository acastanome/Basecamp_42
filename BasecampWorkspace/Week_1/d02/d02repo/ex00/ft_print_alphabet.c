/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:26:35 by acastano          #+#    #+#             */
/*   Updated: 2021/05/28 09:20:20 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while (c != 'z')
	{
		ft_putchar(c);
		c++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
