/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkinnune <jkinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:26:48 by jkinnune          #+#    #+#             */
/*   Updated: 2021/06/06 17:31:30 by jkinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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
