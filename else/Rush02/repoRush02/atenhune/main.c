/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:45:34 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/13 20:28:21 by atenhune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(int argc, char **argv)
{
	int		*xandy;
	char	*arg;
	char	*str0;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		i;

	i = 0;
	if(argc < 2)
	{
		write(1, "Give me an argument\n", 21);
		return(0);
	}
	if(argc > 2)
	{
		write(1, "Too many arguments\n", 19);
		return(0);
	}
	arg =ft_read(0);
	xandy=what_dimensions(arg);
	str0 = rush00((xandy[0]), (xandy[1]));
	if(ft_strcmp(str0, arg) == 0)
	{
		ft_putstr("[rush-00] [");
		ft_putnbr(xandy[0]);
		ft_putstr("] [");
		ft_putnbr(xandy[1]);
		ft_putstr("]\n");
		return(0);
	}
	str1 = rush01((xandy[0]), (xandy[1]));
	if(ft_strcmp(str1, arg) == 0)
	{
		ft_putstr("[rush-01] [");
		ft_putnbr(xandy[0]);
		ft_putstr("] [");
		ft_putnbr(xandy[1]);
		ft_putstr("]\n");
		return(0);
	}
	str2 = rush02((xandy[0]), (xandy[1]));
	if(ft_strcmp(str2, arg) == 0)
	{
		ft_putstr("[rush-02] [");
		ft_putnbr(xandy[0]);
		ft_putstr("] [");
		ft_putnbr(xandy[1]);
		ft_putstr("]");
		i++;
	}
	str3 = rush03((xandy[0]), (xandy[1]));
	if(ft_strcmp(str3, arg) == 0)
	{
		if(i != 0)
		{
			ft_putstr(" || ");
		}
		ft_putstr("[rush-03] [");
		ft_putnbr(xandy[0]);
		ft_putstr("] [");
		ft_putnbr(xandy[1]);
		ft_putstr("]");
	}
	str4 = rush04((xandy[0]), (xandy[1]));
	if(ft_strcmp(str4, arg) == 0)
	{
		if(i != 0)
		{
			ft_putstr(" || ");
		}
		ft_putstr("[rush-04] [");
		ft_putnbr(xandy[0]);
		ft_putstr("] [");
		ft_putnbr(xandy[1]);
		ft_putstr("]");
	}
	else
	{
		ft_putstr("Not a rush")
	}
	ft_putchar('\n');
	
	
	return (0);
}