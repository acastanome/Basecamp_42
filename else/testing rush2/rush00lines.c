/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:47:18 by acastano          #+#    #+#             */
/*   Updated: 2021/06/13 19:04:57 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	*gothroughx(int x, char *str, int j)
{
	int x2;

	x2 = x;
	str[j] = 'o';
	j++;
	while (x2 > 2)
	{
		str[j] = '-';
		x2--;
		j++;
	}
	if (x > 1)
	{
		str[j] = 'o';
		j++;
	}
	str[j] = '\n';
	j++;
	return (str);
}

char	*gothroughxmiddle(int x, char *str, int j)
{
	int x2;

	x2 = x;
	str[j] = '|';
	j++;
	while (x2 > 2)
	{
		str[j] = ' ';
		x2--;
		j++;
	}
	if (x > 1)
	{
		str[j] = '|';
		j++;
	}
	str[j] = '\n';
	j++;
	return (str);
}

char	*oldrush(int x, int y, char *str)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if ((x <= 0) || (y <= 0))
		return (0);
	while (i <= y)
	{
		if ((i == 1) || (i == y))
		{
			str = gothroughx(x, str, j);
			j = j + x + 1;
		}
		else if (i < y)
		{
			str = gothroughxmiddle(x, str, j);
			j = j + x + 1;
		}
		i++;
	}
	return (str);
}

char	*rush00(int x, int y)
{
	char *str;
	int len;

	len = x * y + y + 1;
	str = (char*)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	str[len] = '\0';
	str = oldrush(x, y, str);
	//write(1, str, len);
	//free(str);
	return (str);
}