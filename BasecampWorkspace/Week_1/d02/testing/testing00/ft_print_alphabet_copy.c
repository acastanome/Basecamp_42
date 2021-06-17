/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_copy.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:26:35 by acastano          #+#    #+#             */
/*   Updated: 2021/05/27 19:02:54 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_print_alphabet_copy(void)
{
	char c;
	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
