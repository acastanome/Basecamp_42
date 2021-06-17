/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:02:00 by acastano          #+#    #+#             */
/*   Updated: 2021/06/15 13:06:50 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//let´s pretend we have gotten input into
//array: map.grid[lines][columns] all \0 terminated

int		ft_all_good(t_map map)
{
	if (ft_check_instructions(map) != 0 || ft_is_map_valid(map.grid) != 0)
	{
		write(1, "map error\n", 10);
		return (1);
	}
	return (0);
}

int		ft_check_instructions(t_map map)
{
	if (map.lines == 0 || map.empty == map.obstacle || map.obstacle == map.full || map.empty == map.full)
		return (1);
	return (0);
}

int		ft_is_map_valid(t_map map)
{
	if (!map.grid || ft_empty_count(grid->grid, map) == 0 || ft_line_lengths(grid) != 0)
		return (1);
	return (0);//is valid
} //combined empty_count to track if more than 2 types of chars in the grid (shouldn´t be full)

int		ft_line_lengths(t_map map) // uses map.grid and checks all lines are same
{
	//code
	return (0);
}

int		ft_empty_count(t_map map)//function to check there is atleast one empty space
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
			if (map.grid[lines][column] != (map.empty || map.obstacle) //not sure you can write it like that, but to condense now in what it means for us readability
				return (0); //will send message not valid map
			if (map.grid[lines][column] == map.empty)
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
