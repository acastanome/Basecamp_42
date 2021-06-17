/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:43:02 by ahaavist          #+#    #+#             */
/*   Updated: 2021/06/13 19:57:56 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print_them(int a, char c1, char c2, char c3, int j)
{
	str[j] = c1;
	j++;
	while (a > 2)
	{
		str[j] = c2;
		a--;
	}
	if (a > 1)
	{
		str[j] = c3;
	}
	str[j] = '\n';
}

char	*rush(int a, int b, char *str)
{
	int j;

	j = 0;
	if (a <= 0 || b <= 0)
	{
		return (0);
	}
	print_them(a, 'A', 'B', 'C', j);
	while (b > 2)
	{
		print_them(a, 'B', ' ', 'B', j);
		b--;
	}
	if (b > 1)
	{
		print_them(a, 'C', 'B', 'A', j);
	}
}

char	*rush04(int x, int y)
{
	char *str;
	int len;

	len = x * y + y + 1;
	str = (char*)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	str[len] = '\0';
	str = rush(x, y, str);
	return (str);
}
