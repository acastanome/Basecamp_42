/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dankwon <dankwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:04:29 by dankwon           #+#    #+#             */
/*   Updated: 2021/06/16 18:16:37 by dankwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fctnl.h>

typedef unsigned short t_unsign;

typedef struct	st_grid
{
	unsigned short	x;
	unsigned short	y;
	unsigned char	char_empty;
	unsigned char	char_obstacle;
	unsigned char	char_full;
}					s_grid;

typedef struct	st_square
{
	struct st_coord	*start;
	short				length;
}					s_square;

typedef struct		st_coord
{
	unsigned short	x;
	unsigned short	y;
	struct st_coord	*next;
}					s_coord;

void	bsq(int *argc, char **argv);
t_unsign	read_file(char *file);
t_unsign	read_stdin();
t_unsign	prepare_read(int *fd);
t_unsign	ft_read(int *ft, char *buffer, s_grid, s_coord *xy);
t_unsign	ft_read_char(s_coord *xy, char *buffer, s_grid *grid, s_coord **begin);
s_grid		create_struct_grid();
t_unsign	first_line(char *buffer, s_grid *grid);
t_unsign	check_first_line(s_grid *grid);

short	check_debris(t_unsign *x, t_unsign *y, t_unsign l, s_coord **list);
s_square	*algo_bsq(s_coord **list, s_grid *grid);
s_coord		*create_obstacle(s_coord) *xy);

void	push_back(s_coord **begin, s_coord *xy);

void	init_those(s_square **temp, s_square **max);
s_square	*square_init();

void	display(s_square *square, s_grid *grid, s_coord **begin);
t_unsign	ft_after_read(s_coord *xy, s_grid *grid, s_coord **begin);

#endif
