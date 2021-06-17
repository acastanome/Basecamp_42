/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkinnune <jkinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:31:13 by jkinnune          #+#    #+#             */
/*   Updated: 2021/06/06 17:32:03 by jkinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	checker(char **grid, int row, int col, char num)
{
	int		x;
	int		y;
	int		i;
	int		j;

	x = 0;
	y = 0;
	i = 0;
	j = 0;
	while (x <= 8)
	{
		if (grid[row][x] == num)
			return (0);
		x++;
	}
	while (y <= 8)
	{
		if (grid[y][col] == num)
			return (0);
		y++;
	}
	return (ft_squares(grid, row, col, num));
}
