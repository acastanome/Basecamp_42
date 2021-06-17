/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00orig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:47:18 by acastano          #+#    #+#             */
/*   Updated: 2021/06/13 15:19:38 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	gothroughx(int x)
{
	int x2;

	x2 = x;
	ft_putchar('o');
	while (x2 > 2)
	{
		ft_putchar('-');
		x2--;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	gothroughxmiddle(int x)
{
	int x2;

	x2 = x;
	ft_putchar('|');
	while (x2 > 2)
	{
		ft_putchar(' ');
		x2--;
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if ((x <= 0) || (y <= 0))
		return ;
	while (i <= y)
	{
		if ((i == 1) || (i == y))
		{
			gothroughx(x);
		}
		else if (i < y)
		{
			gothroughxmiddle(x);
		}
		i++;
	}
}

int		main(void)
{
	int x;
	int y;

	x = 2;
	y = 3;
	rush(x, y);
	return (0);
}