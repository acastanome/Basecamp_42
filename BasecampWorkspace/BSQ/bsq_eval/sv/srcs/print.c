/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:45:39 by wvaisane          #+#    #+#             */
/*   Updated: 2021/06/16 12:39:52 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_heads.h"

void	print(char **grid, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			ft_putchar(grid[i][j]);
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
}
