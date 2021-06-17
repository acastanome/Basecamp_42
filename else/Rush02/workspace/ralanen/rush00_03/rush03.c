/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:20:28 by starnane          #+#    #+#             */
/*   Updated: 2021/06/13 11:05:52 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nt	ft_putchar(char c);

int	rush(int x, int y)
{
	int w;
	int l;

	w = 0;
	l = 0;
	if ((x < 1) || (y < 1))
		return (0);
	while (++l <= y)
	{
		while (++w <= x)
		{
			if ((w == 1) && (l == 1 || l == y))
				ft_putchar('A');
			else if ((w == x) && (l == 1 || l == y))
				ft_putchar('C');
			else if (((1 < l < y) && (w == 1 || w == x)) ||
				((1 < w < x) && (l == 1 || l == y)))
				ft_putchar('B');
			else if ((1 < l < y) && (1 < w < x))
				ft_putchar(' ');
		}
		ft_putchar('\n');
		w = 0;
	}
	return (0);
}
