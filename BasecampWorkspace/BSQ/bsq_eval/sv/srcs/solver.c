/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 09:06:27 by spuustin          #+#    #+#             */
/*   Updated: 2021/06/16 20:33:18 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fill(char **grid, int side, int *crd, char f);
void	ft_putchar(char c);
void	print(char **grid, int x, int y);
void	solver(char **grid, char *chars, int width, int height)
{
	int i;
	int j;
	int max_side;
	int *coordinates;
	int crnt;
	int side;
	int rep;
	char smallest;
	coordinates = (int *)malloc(sizeof(int) * 2);
	i = width -1;
	j = height -1;
	while(j > 1)
	{
		while(i > 1)
		{
			smallest = grid[i-1][j];
			if (grid[i][j-1] < smallest)
				smallest = grid[i][j-1];
			if (grid[i-1][j-1] < smallest)
				smallest = grid[i-1][j-1];
			grid[i][j] += (smallest - '0');
			i--;
		}
		j--;
		i = width-1;
	}
	//print(grid, width, height);
	//fill(grid, max_side, coordinates, chars[0]);
}
