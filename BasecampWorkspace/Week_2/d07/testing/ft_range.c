/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:45:02 by jheloaho          #+#    #+#             */
/*   Updated: 2021/06/04 08:19:09 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	if (min >= max)
		return (0);
	arr = (int*)malloc(sizeof(*arr) * (max - min));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

int main(void)
{
	int i;
	int min;
	int max;
	int *arr;

	i = 0;
	min = -3;
	max =-10;
	
	arr = ft_range(min, max);
	while (i <= max - min - 1)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
