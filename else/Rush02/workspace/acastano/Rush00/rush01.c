/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:05:35 by emerilai          #+#    #+#             */
/*   Updated: 2021/05/30 16:40:23 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	place(int x, char sc, char mc, char sc2)
{
	ft_putchar(sc);
	while ((x - 1) > 1)
	{
		ft_putchar(mc);
		x--;
	}
	if (x > 1)
		ft_putchar(sc2);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		place(x, '/', '*', '\\');
		y--;
		while (y > 1)
		{
			place(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
			place(x, '\\', '*', '/');
	}
}
