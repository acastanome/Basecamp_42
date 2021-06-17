/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:40:35 by acastano          #+#    #+#             */
/*   Updated: 2021/06/05 21:21:32 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//if more than one solution display "Error"

int		ft_sudoku(char **grid);
{
	int i;
	int j;
	char num;

	i = 0;
	j = 0;
	num = '1';
	while (j < 9)
	{
		while (i < 9)
		{
			if (grid[j][i] == '.')
			{
				while (num <= '9')
				{
					if (check_num_at_point(num, j, i, grid) == 1)
					{
						grid[j][i] = num;
						ft_sudoku(grid);
					}
					num++;
				}
			}
			i++;
		}
		j++;
	}
	return (0);
}

int		check_square(char num, int x, int y, char **grid)//returns 1 if num not possible, or num if possible
{
	int i = 0;
	int j = 0;

	if ((x % 3) != 0)
		x = x - (x % 3);
	if ((y % 3) != 0)
		y = y - (y % 3);
	while (i < 3)
	{
		while (j < 3)
		{
			if (grid[x + i][y + j] == num)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int		check_line(char num, int y, char **grid)//returns 1 if num not possible, or num if possible
{
	int i = 0;

	while (i < 9)
	{
		if (grid[i][y] == num)
			return (0);
		i++;
	}
	return (1);
}

int		check_column(char num, int x, char **grid)//returns 1 if num not possible, or num if possible
{
	int j = 0;

	while (j < 9)
	{
		if (grid[x][j] == num)
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