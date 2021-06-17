/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudez <mrudez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:15:16 by acastano          #+#    #+#             */
/*   Updated: 2021/06/15 14:49:18 by mrudez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h> //write
#include <stdlib.h> //malloc

typedef		s_map // to make a t_map map that holds the info from stdin
{
	int		lines; //nbroflines is the number at the begining of the map
	int		columns; // only the size of the width from the first line i++ \n
	char	empty;
	char	obstacle;
	char	full;
	char	**grid; //with this we don´t need t_grid
}			t_map;

char	**creategrid(t_map map, char **argv);
int		ft_all_good(t_map map);
int		ft_check_instructions(t_map map);
int		ft_is_map_valid(t_map map);
int		ft_empty_count(t_map map);
int		ft_line_lengths(t_map map);
int		ft_empty_count(t_map map);

/*
typedef		s_grid
{
	char	*lines;
	char	*columns;
	char	**grid;
}			t_grid; // to hold the grid we get from stdin, in main
*/


/*
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

int		check_valid_input(char **grid);
int		solver(char **grid, int row, int col);
int		ft_errors(int argc, char **argv);
void	print(char **arr);*/

#endif
