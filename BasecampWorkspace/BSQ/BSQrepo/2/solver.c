/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:15:16 by acastano          #+#    #+#             */
/*   Updated: 2021/06/16 20:40:54 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_min(int a, int b, int c)
{
	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

char	**ft_grid_to_0_1(char **grid)
{
	int j;
	int i;

	j = 0;
	i = 0;
	while (j < map.lines)
	{
		while (i < map.length)
		{
			if (grid[j][i] == map.obstacle)
				grid[j][i] = '0';
			else
				grid[j][i] = '1';
			i++;
		}
		i = 0;
		j++;
	}
	return (grid);
}

char	**ft_0_1_to_grid(char **grid)
{
	int j;
	int i;

	j = 0;
	i = 0;
	while (j < map.lines)
	{
		while (i < map.length)
		{
			if (grid[j][i] == '0')
				grid[j][i] = map.obstacle;
			else
				grid[j][i] = map.empty;
			i++;
		}
		i = 0;
		j++;
	}
	return (grid);
}

char	**filler(char **grid)
{
	int j;
	int i;

	j = map.y;
	i = map.x;
	while (j < map.value)
	{
		while (i < map.value)
		{
			grid[i][j] = map.full;
			i++;
		}
		i = map.x;
		j++;
	}
	return (grid);
}

int		ft_count(char **grid)
{
	int j;
	int i;

	j = 1;
	i = 1;
	grid = ft_grid_to_0_1(grid);
	while (j < map.lines)
	{
		while (i < map.length)
		{
			if (grid[j][i] != '0')
				grid[j][i] = min(grid[j][i - 1], grid[j - 1][i - 1], grid[j - 1][i]) + 1;
			i++;
		}
		i = 1;
		j++;
	}
	return (0);
}

char	**ft_solver(char **grid)
{
	int j;
	int i;

	j = 0;
	i = 0;
	map.value = 0;
	map.x = 0;
	map.y = 0;
	while (j < map.lines)
	{
		while (i < map.length)
		{
			if (grid[j][i] > map.value)
			{
				map.value = grid[j][i];
				map.x = i - (max.value) + 1;
				map.y = j - (max.value) + 1;
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (grid);
}

t_map	all_solver(t_map map)
{
	map->grid = ft_grid_to_0_1(map->grid);
	map->grid = ft_count(map->grid);
	map->grid = ft_solver(map->grid);
	map->grid = ft_0_1_to_grid(map->grid);
	map->grid = filler(map->grid);
	return (map);
}
