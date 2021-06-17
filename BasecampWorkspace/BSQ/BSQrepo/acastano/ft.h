/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:15:16 by acastano          #+#    #+#             */
/*   Updated: 2021/06/16 20:40:11 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdlib.h>

typedef		s_map
{
	int		lines;
	int		length;
	char	empty;
	char	obstacle;
	char	full;
	char	**grid;
	int		value;
	int		x;
	int		y;
}			t_map;

char	**creategrid(t_map map, char **argv);???
int		ft_all_good(t_map map);
int		ft_check_instructions(t_map map);
int		ft_is_map_valid(t_map map);
int		ft_empty_count(t_map map);
void	map_values(t_map map);
int		ft_min(int a, int b, int c);
char	**ft_grid_to_0_1(char **grid);
char	**ft_0_1_to_grid(char **grid);
char	**filler(char **grid);
int		ft_count(char **grid);
char	**ft_solver(char **grid);

#endif
