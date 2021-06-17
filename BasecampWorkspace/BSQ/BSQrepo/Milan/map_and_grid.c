/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_and_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudez <mrudez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 06:18:04 by mrudez            #+#    #+#             */
/*   Updated: 2021/06/16 20:41:01 by mrudez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

t_map	g_map;

//should create t_map map first (proto in ft.h)

char	**creategrid(t_map map, char **argv)//how to pass stdin as str
{
	int		i;
	int		j;
	char	**grid;

	grid = (char**)malloc(sizeof(char*) * map.lines + 1); // \0
	i = 0;
	j = 0;
	while (i < map.lines)
	{
		grid[i] = (char*)malloc(sizeof(char) * map.length + 1); // \0
		while (j < map.length)
		{
			grid[i][j] = argv[i + 1][j]; //to get it here. tired, check this
			j++;
		}
		i++;
		j = 0;
	}
	return (grid);
}

void	construct2d(char *buff, int metalen)
{
	int		i;
	int		j;
	char	**grid;

	i = 0;
	j = 0;
	grid = (char **)malloc(sizeof(*grid) * g_map.lines);
	while (i < g_map.lines)
	{
		grid[i] = (char *)malloc(g_map.length * sizeof(char));
		while (j < g_map.length)
		{
			if (buff[metalen] == '\n')
			{
				metalen++;
				i++;
				grid[i][j] = buff[metalen];
			}
			grid[i][j] = buff[metalen];
			j++;
		}
		i++;
		j = 0;
	}
	i = 0;
	passitsomewhere(buff);
	while (i < g_map.lines)
	{
		free (grid[i]);
		i++;
	}
	free (grid);
}

void	ft_meta(char *meta, int len)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	g_map.full = meta[len - 1];
	g_map.obstacle = meta[len - 2];
	g_map.empty = meta[len - 3];
	while (i < len - 3)
	{
		res = res * 10 + meta[i] + 0;
		i++;
	}
	g_map.lines = res;
}

void		gridinit(char *buff)
{
	int		i;
	int		metalen;
	char	*meta;
	char	*arr;

	i = 0;
	meta = NULL;
	arr = NULL;
	while (buff[i] != '\n')
	{
		meta[i] = buff[i];
		i++;
	}
	meta[i] = '\0';
	metalen = i;
	ft_meta(meta, metalen);
	i++;
	while (buff[i] != '\n')
		i++;
	g_map.length = i;
	construct2d(buff, metalen);
}
