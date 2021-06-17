/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:31:27 by jkinnune          #+#    #+#             */
/*   Updated: 2021/06/06 20:25:41 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	solver(char **grid, int row, int col)
{
	char	num;

	num = '1';
	if (row == 8 && col == 9)
		return (1);
	if (col == 9)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] != '.')
		return (solver(grid, row, col + 1));
	while (num <= '9')
	{
		if (checker(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (solver(grid, row, col + 1) == 1)
				return (1);
		}
		grid[row][col] = '.';
		num++;
	}
	return (0);
}
