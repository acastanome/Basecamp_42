/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 19:59:54 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/13 20:28:40 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int		*xandy;
	char	*arg;
	char	*str0;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		i;
	int		rnum;
	int		a;

	rnum = 0;
	a = 0;
	i = 0;
	if (argc < 2)
	{
		write(1, "Give me an argument\n", 21);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments\n", 19);
		return (0);
	}
	arg = ft_read(0);
	xandy = what_dimensions(arg);
	str0 = rush00((xandy[0]), (xandy[1]));
	str1 = rush01((xandy[0]), (xandy[1]));
	str2 = rush02((xandy[0]), (xandy[1]));
	str3 = rush03((xandy[0]), (xandy[1]));
	str4 = rush04((xandy[0]), (xandy[1]));

	ft_comp_all_rushes(void);
	return (0);
}
