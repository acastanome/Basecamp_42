/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:22:49 by wvaisane          #+#    #+#             */
/*   Updated: 2021/06/15 12:31:34 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_heads.h"

int		ft_atoi(char *str)
{
	int nbr;
	int index;
	
	index = 0;
	nbr = 0;

	while (str[index] == 32 || str[index] == 9)
		{
			str[index] = 48;
			index++;
		}
	if (str[index] == '-')
	{	
		str[index] = 48;
		while (str[index] > 47 && str[index] < 58)
		{
			nbr = nbr + str[index] - '0' + (nbr * 10);
			index++;
		}
		nbr *= (-1);
	}	
	else
	{
		while (str[index] > 47 && str[index] < 58)
		{
			nbr = str[index] - '0' + (nbr * 10);
			index++;
		}
	}	
	return nbr;
}
