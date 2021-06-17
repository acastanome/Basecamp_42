/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:52:02 by spuustin          #+#    #+#             */
/*   Updated: 2021/06/16 14:52:03 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_heads.h"

void	fill(char **grid, int side, int *crd, char f)
{
	int		x_side;
	int		y_side;

	y_side = side;
	x_side = side;
	ft_putstr("menee while looppiin.\n");
	while (y_side > 0)
	{
		ft_putstr("menee sisempään while looppiin.\n");
		while (x_side > 0)
		{
			grid[crd[0]][crd[1]] = f;
			crd[0]++;
			x_side--;
		}
		crd[1]++;
		crd[0] -= side;
		x_side = side;
		y_side--;
		ft_putstr("sisempi while loop valmis.\n");
	}
	ft_putstr("while loop valmis.\n");
	//print(grid);
	ft_putchar('\n');
}
