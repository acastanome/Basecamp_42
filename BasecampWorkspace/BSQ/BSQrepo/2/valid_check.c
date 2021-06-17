/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:02:00 by acastano          #+#    #+#             */
/*   Updated: 2021/06/16 20:28:22 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_all_good(t_map map)
{
	if (ft_check_instructions(map) != 0 || ft_is_map_valid(map->grid) != 0)
	{
		write(1, "map error\n", 10);
			return (1);
	}
	return (0);
}

void	map_values(t_map map)
{
	map.full = buff[i-1];
	map.obstacle = buff[i-2];
	map.empty = buff[i-3];
	while (i != 0)
	{
		map.lines = map.lines + buff[0];
	}
}

int		ft_check_instructions(t_map map)
{
	if (map.lines == 0 || map.empty == map.obstacle || map.obstacle == map.full || map.empty == map.full)
		return (1);
	return (0);
}

int		ft_is_map_valid(t_map map)
{
	if (!map.grid || ft_empty_count(grid->grid, map) == 0)
		return (1);
	return (0);
}

int		ft_empty_count(t_map map)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (i < map.lines)
	{
		while (j < map.columns)
		{
			if (map->grid[lines][column] != (map.empty || map.obstacle)
				return (0);
			if (map->grid[lines][column] == map.empty)
			{
				count++;
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (count);
}
