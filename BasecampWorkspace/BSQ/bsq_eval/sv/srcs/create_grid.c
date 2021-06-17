/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:50:37 by wvaisane          #+#    #+#             */
/*   Updated: 2021/06/16 13:26:20 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_heads.h"

char		**create_grid(char *str, int x, int y)
{
	char	**grid;
	int		i;
	int		j;
	int		k;

	grid = (char **)malloc(sizeof(char *) * y + 1);
	k = 0;
	while (k < y)
	{
		grid[k] = (char *)malloc(sizeof(char) * x + 1);
		k++;
	}
	k = 0;
	while (str[k] != '\n')
	{
		k++;
	}
	k++;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (str[k] != '\n')
		{
			//if(str[k] != o || str[k] != e)
			//	return (0);
			grid[i][j]= str[k];
			k++;
			i++;
		}
		i++;
		k++;
		j++;
	}
	return (grid);
}
