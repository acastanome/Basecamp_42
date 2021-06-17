/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_squares.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkinnune <jkinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:25:18 by jkinnune          #+#    #+#             */
/*   Updated: 2021/06/06 13:25:30 by jkinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
