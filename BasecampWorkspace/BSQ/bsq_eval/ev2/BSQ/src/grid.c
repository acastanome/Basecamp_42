/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:08:00 by dankwon           #+#    #+#             */
/*   Updated: 2021/06/17 13:59:39 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

s_grid	create_struct_grid(void)
{
	s_grid grid;

	grid.char_empty = 0;
	grid.char_obstacle = 0;
	grid.char_full = 0;
	grid.x = 0;
	grid.y = 0;
	return (grid);
}
