/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 07:03:56 by jervasti          #+#    #+#             */
/*   Updated: 2021/05/30 08:30:24 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int xc;
	int yc;

	xc = 0;
	yc = 0;
	while (yc < y)
	{
		while (xc < x)
		{
			if ((xc == 0 && yc == 0) ||
			(xc > 1 && yc > 1 && (xc == (x - 1) && yc == (y - 1))))
				ft_putchar('/');
			else if ((xc == (x - 1) && yc == 0) || (xc == 0 && yc == (y - 1)))
				ft_putchar('\\');
			else if ((xc > 0 && xc < (x - 1))
			&& (yc > 0 && yc < (y - 1)))
				ft_putchar(' ');
			else
				ft_putchar('*');
			xc++;
		}
		ft_putchar('\n');
		yc++;
		xc = 0;
	}
}
