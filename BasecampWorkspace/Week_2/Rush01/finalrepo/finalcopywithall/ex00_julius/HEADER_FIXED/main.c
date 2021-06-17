/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkinnune <jkinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:30:20 by jkinnune          #+#    #+#             */
/*   Updated: 2021/06/06 17:31:35 by jkinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft.h"

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

	if (!ft_errors(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	grid = creategrid(argv);
	if (solver(grid, 0, 0) == 1)
		print(grid);
	else
		ft_putstr("Error\n");
	return (0);
}
