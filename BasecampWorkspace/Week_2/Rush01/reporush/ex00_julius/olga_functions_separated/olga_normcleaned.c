/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   olga_normcleaned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:30:20 by jkinnune          #+#    #+#             */
/*   Updated: 2021/06/06 14:20:14 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_squares(char **grid, int row, int col, char num);
void	print(char **arr);
int		checker(char **grid, int row, int col, char num);
int		solver(char **grid, int row, int col);

char	**creategrid(char **argv)
{
	int		i;
	int		j;
	char	**grid;

	grid = (char**)malloc(sizeof(char*) * 9);
	i = 0;
	j = 0;
	while (i < 9)
	{
		grid[i] = (char*)malloc(sizeof(char) * 9);
		while (j < 9)
		{
			grid[i][j] = argv[i + 1][j];
			j++;
		}
		i++;
		j = 0;
	}
	return (grid);
}

int		main(int argc, char **argv)
{
	char	**grid;

	if (argc != 10)//added
	{
		ft_putstr("Error\n");
		return (0);
	}
	grid = creategrid(argv);
	if (solver(grid, 0, 0) == 1)
		print(grid);
	else
		ft_putstr("No solution exists\n");
	return (0);
}
