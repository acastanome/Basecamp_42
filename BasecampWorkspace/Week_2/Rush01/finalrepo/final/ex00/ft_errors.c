/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:19:30 by jkinnune          #+#    #+#             */
/*   Updated: 2021/06/06 19:47:57 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_errors(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc != 10)
	{
		return (0);
	}
	while (i < 10)
	{
		if (!lettercheck(argv[i]))
		{
			return (0);
		}
		if (ft_strlen(argv[i]) != 9)
			return (0);
		if (!duplicateletter(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	lettercheck(char *str)
{
	while (*str)
	{
		if (!((*str >= '1' && *str <= '9') || (*str == '.')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	duplicateletter(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < 9)
	{
		while (j < 9)
		{
			if (str[i] == str[j] && str[i] != '.')
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	check_valid_sudoku(char **grid)
{
	int i;
	int j;
	int num;

	i = 0;
	j = 0;
	num = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (grid[i][j] >= '1' && grid[i][j] <= '9')
				num++;
			j++;
		}
		j = 0;
		i++;
	}
	return (num);
}
