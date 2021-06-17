/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:47:18 by acastano          #+#    #+#             */
/*   Updated: 2021/06/13 14:55:47 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	ft_putchar(char c);

int	gothroughx(int x, char *str, int i)
{
	int x2;

	x2 = x;
	str[i-1] = 'o';
	i++;
	while (x2 > 2)
	{
		str[i-1] = '-';
		x2--;
		i++;
	}
	if (x > 1)
	{
		str[i-1] = 'o';
		i++;
	}
	str[i-1] = '\n';
	return (i);
}

int	gothroughxmiddle(int x, char *str, int i)
{
	int x2;

	x2 = x;
	str[i-1] = '|';
	i++;
	while (x2 > 2)
	{
		str[i-1]=' ';
		x2--;
		i++;
	}
	if (x > 1)
	{
		str[i-1] = '|';
		i++;
	}
	str[i-1] = '\n';
	return (i);
}

char	*rush(int x, int y, char *str)
{
	//char *str;
	int i;

	//str = (char*)malloc(sizeof(char) * (x * y));
	i = 1;
	if ((x <= 0) || (y <= 0))
		return (0);
	while (i <= y)
	{
		if ((i == 1) || (i == y))
		{
			i = gothroughx(x, str, i);
		}
		else if (i < y)
		{
			i = gothroughxmiddle(x, str, i);
		}
		i++;
	}
	return (str);
}
