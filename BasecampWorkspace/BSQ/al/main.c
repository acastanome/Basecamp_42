/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:14:16 by acastano          #+#    #+#             */
/*   Updated: 2021/06/15 10:46:30 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_solution(t_map map, char **grid) //passing solved_grid
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < map.lines)
	{
		while (j < map.columns)
		{
			write(1, grid[i][j], 1);
			j++;
		}
		write(1, grid[i][j], 1);
		j = 0;
		i++;
	}
}

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

char	**creategrid(t_map map, SOMETHING)//something ot pass stdin
{
	int		i;
	int		j;
	char	**grid;

	grid = (char**)malloc(sizeof(char*) * map.lines + 1); // \0
	i = 0;
	j = 0;
	while (i < map.lines)
	{
		grid[i] = (char*)malloc(sizeof(char) * map.columns + 1); // \0
		while (j < map.columns)
		{
			grid[i][j] = ??; //how to get it here
			j++;
		}
		i++;
		j = 0;
	}
	return (grid);
}

int		main(int argc, char **argv)
{
	char	**grid;

	if (!ft_errors(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	grid = creategrid(argv);
	if (check_valid_sudoku(grid) < 17)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (solver(grid, 0, 0) == 1)
		print(grid);
	else
		ft_putstr("Error\n");
	free(grid);
	return (0);
}