/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_y.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:47:49 by wvaisane          #+#    #+#             */
/*   Updated: 2021/06/15 17:02:49 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_heads.h"

int	pick_y(char *str)
{
	char	ystring;
	int		y;
	int		i;
	int		j;
	
	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (j < i - 3)
	{
		j++;
	}
	ft_strncpy(&ystring, str, j);
	y = ft_atoi(&ystring);
	return (y);
}
