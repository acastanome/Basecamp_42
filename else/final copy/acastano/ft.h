/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:15:16 by acastano          #+#    #+#             */
/*   Updated: 2021/06/15 00:14:39 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef		s_map // to make a t_map map that holds the info from stdin
{
	int		lines;
	int		columns;
	char	empty;
	char	obstacle;
	char	full;
}			t_map;

typedef		s_grid
{
	char	*lines;
	char	*columns;
	char	**grid;
}			t_grid; // to hold the grid we get from stdin, in main

/*
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

int		check_valid_input(char **grid);
int		solver(char **grid, int row, int col);
int		ft_errors(int argc, char **argv);
void	print(char **arr);*/

#endif
