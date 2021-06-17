/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:02:00 by acastano          #+#    #+#             */
/*   Updated: 2021/06/15 00:34:57 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//let´s pretend we have gotten input into
//array: t_grid grid[lines][columns] all \0 terminated

int		ft_check_instructions(t_map map)
{
	if (map.empty == map.obstacle || map.obstacle == map.full || map.empty == map.full)
		return (1);
	return (0);
}

int		ft_line_lengths(t_grid grid) //checks all lines are same
{
	//code
	return (0);
}

int	ft_empty_count(char **grid, t_map map)//function to check there is atleast one empty space
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
			if (grid[lines][column] != (map.empty || map.obstacle || map.full) //not sure you can write it like that, but to condense now in what it means for us readability
				return (0); //will send message not valid map
			if (grid[lines][column] == map.empty)
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

int		ft_is_map_valid(t_grid grid, t_map map)
{
	if (!grid->grid || ft_empty_count(grid->grid, map) == 0 || ft_line_lengths(grid) != 0)
		return (1);
	return (0);//is valid
} //maybe combine empty_count and track if more than 3 types of chars

int		ft_all_good(t_grid grid, t_map map)
{
	if (ft_check_instructions(map) != 0 || ft_is_map_valid(grid) != 0)
	{
		write(1, "map error\n", 10);
		return (1);
	}
	return (0);
}
