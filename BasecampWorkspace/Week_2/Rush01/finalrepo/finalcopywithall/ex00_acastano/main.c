/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 10:00:00 by acastano          #+#    #+#             */
/*   Updated: 2021/06/05 21:23:48 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>//write
#include <stdlib.h>//malloc

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

void	ft_print_grid(char **arr)
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

//int		ft_sudoku(char **str);

char	*ft_copy_line(char *line)
{
	int		i;
	char	*linecpy;

	i = 0;
	linecpy = (char *)malloc(sizeof(char) * (9 + 1));
	if (linecpy == '\0')
		return (0);
	while (i < 9)
		linecpy[i] = line[i];
	linecpy[i] = '\0';
	return (linecpy);
}

int		main(int argc, char **argv)
{
	int		i;
	char	**grid;

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	i = 0;
	grid = (char **)malloc(sizeof(char *) * (9 + 1));
	while (i < 9)
	{
		grid[i] = ft_copy_line(argv[1 + i]);//PROBLEM
		i++;
	}
	grid[i][0] = '\0';
	ft_sudoku(grid);
	ft_print_grid(grid);
	return (0);
}
