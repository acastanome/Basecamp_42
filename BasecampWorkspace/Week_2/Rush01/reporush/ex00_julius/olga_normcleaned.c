#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_squares(char **grid, int row, int col, char num)
{
	int		startrow;
	int		startcol;
	int		i;
	int		j;

	i = 0;
	j = 0;
	startrow = row - row % 3;
	startcol = col - col % 3;
	while (i < 3)
	{
		while (j < 3)
		{
			if (grid[i + startrow][j + startcol] == num)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

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

int		checker(char **grid, int row, int col, char num)
{
	int		x;
	int		y;
	int		i;
	int		j;

	x = 0;
	y = 0;
	i = 0;
	j = 0;
	while (x <= 8)
	{
		if (grid[row][x] == num)
			return (0);
		x++;
	}
	while (y <= 8)
	{
		if (grid[y][col] == num)
			return (0);
		y++;
	}
	return (ft_squares(grid, row, col, num));
}

int		solver(char **grid, int row, int col)
{
	char	num;

	num = '1';
	if (row == 9 - 1 && col == 9)
		return (1);
	if (col == 9)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] != '.')
		return (solver(grid, row, col + 1));
	while (num <= '9')
	{
		if (checker(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (solver(grid, row, col + 1) == 1)
				return (1);
		}
		grid[row][col] = '.';
		num++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	**grid;

	grid = creategrid(argv);
	if (solver(grid, 0, 0) == 1)
		print(grid);
	else
		ft_putstr("No solution exists\n");
	return (0);
}
