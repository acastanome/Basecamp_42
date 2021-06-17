/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:47:18 by acastano          #+#    #+#             */
/*   Updated: 2021/05/30 18:34:04 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
