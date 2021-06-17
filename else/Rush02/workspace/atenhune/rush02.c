/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:05:13 by atenhune          #+#    #+#             */
/*   Updated: 2021/05/30 15:32:34 by atenhune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int x_c;
	int y_c;

	x_c = 0;
	y_c = 0;
	while (y_c < y)
	{
		while (x_c < x)
		{
			if ((x_c == 0 && y_c == 0)
			|| (x_c == (x - 1) && y_c == 0))
				ft_putchar('A');
			else if ((x_c == (x - 1) && y_c == (y - 1))
			|| (x_c == 0 && y_c == (y - 1)))
				ft_putchar('C');
			else if ((x_c > 0 && x_c < (x - 1)) && (y_c > 0 && y_c < (y - 1)))
				ft_putchar(' ');
			else
				ft_putchar('B');
			x_c++;
		}
		ft_putchar('\n');
		y_c++;
		x_c = 0;
	}
}
