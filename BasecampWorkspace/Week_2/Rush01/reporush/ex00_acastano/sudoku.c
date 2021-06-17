/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:40:35 by acastano          #+#    #+#             */
/*   Updated: 2021/06/06 13:29:57 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print(char **arr)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 8)
		{
			ft_putchar(arr[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar(arr[i][j]);
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int		check_square(char num, int x, int y, char **grid)//returns 0 if num not possible, 1 if possible
{
	int i;
	int j;

	i = 0;
	j = 0;
	if ((x % 3) != 0)
		x = x - (x % 3);
	if ((y % 3) != 0)
		y = y - (y % 3);
	while (i < 3)
	{
		while (j < 3)
		{
			if (grid[y + i][x + j] == num)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int		check_line(char num, int y, char **grid)//returns 0 if num not possible, 1 if possible
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[y][i] == num)
			return (0);
		i++;
	}
	return (1);
}

int		check_column(char num, int x, char **grid)//returns 0 if num not possible, or num if possible
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grid[j][x] == num)
			return (0);
		j++;
	}
	return (1);
}

int		check_num_at_point(char num, int x, int y, char **grid)
{
	if (check_line(num, y, grid) && check_column(num, x, grid) && check_square(num, x, y, grid))
	{
		return (1);
	}
	return (0);
}

int		ft_sudoku(char **grid)//very close but backtracking missing
{
	int		x;
	int		y;
	char	num;

	x = 0;
	y = 0;
	num = '1';
	while (grid[y][x] != '.')
	{
		if ((x == 8) && (y != 8))
		{
			x = 0;
			y++;
		}
		if ((x != 8))//took else if
			x++;
		if ((x == 8) && (y == 8))
		{
			printf("Got to everything is filled\n");
			print(grid);
			printf("\n");
			return (1);
		}
	}
	if (grid[y][x] == '.')
	{
		while (num <= '9')
		{
			//printf("NUM %d\n", num);
			if (check_num_at_point(num, x, y, grid) == 1)
			{
				//printf("NUMB %d\n", num);
				grid[y][x] = num;
				//print(grid);
				//printf("\n");
				//printf("round 1 %d\n", y);
				ft_sudoku(grid);
				//print(grid);
				//printf("\n");
			}
			//return (grid);
			num++;
			//printf("roiund 2 %d\n", y);
		}
		//printf("round 3 %d\n", y);
		grid[y][x] = '.';
		//print(grid);
		return (1);
	}
	//print(grid);
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**grid;

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
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
	print(grid);
	ft_putchar('\n');
	ft_sudoku(grid);
	print(grid);
	free(grid);
	return (0);
}

//./a.out ".136578.." "8.5319.64" "967.2..3." "594...3.." "7.2...6.." "186..3592" "671...4.." "..9...2.6" "...53.9.."
//./a.out ".136578.." "8.5319.64" "967.2..3." "594...3.." "7.2...6.." "186..3592" "671...4.." "..9...2.6" "...53.9.."