/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:23:34 by wvaisane          #+#    #+#             */
/*   Updated: 2021/06/15 16:34:31 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_heads.h"

int	pick_x(char *str)
{
	int i;
	int x;
	
	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	i++;
	x = 0;
	while (str[i] != '\n')
	{
		i++;
		x++;
	}
	return (x);
}
