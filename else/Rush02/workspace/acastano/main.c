/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 10:49:11 by acastano          #+#    #+#             */
/*   Updated: 2021/06/13 09:37:52 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_dim.h"

//prog takes char str as arg.
//Displays name of rush and it´s dimensions

//executable name: rush-2

//compiled as: make fcleac		or as: make

//if arg is not a rush, display aucune
//whatever answer, always end with a newline
//if more than 1 rush, display alphabetically

int		ft_valid_input(int argc, char **argv)
{
	if (argc < 2) //check there is at least 1 param passed
		return (1);
	if (argc >= 2)
	{
		//check params passed are valid, or return 1
	}
	return (0); //all good
}

t_dim	what_dimensions(char *str) //atenhune modified to use struct
{
	t_dim input_dims;
	int i;
	int x;
	int y;
	//printf("%s", str);
	input_dims = (t_dim)malloc(sizeof(int + 2));//remember to free it
	i = 0;
	x = 0;
	y = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '\n')
		{
			y++;
			x = i / y;
		}
		i++;
	}
	printf("%d ", x);
	printf("%d\n", y);
	t_dim->x = x;
	t_dim->y = y;
	return (t_dim);
}

int		rush_display(char *str)
{
	
}

int		main(int argc, char **argv) //run as ./rush-2 rush00
{
	int i;

	i = 1;
	if (ft_valid_input(argc, argv) != 0)
	{
		ft_putstr("aucune\n");
		return (1);
	}
	while (i <= argc)
	{
		rush_display(argv[i]);
		i++;
	}
	write(1, argv[1], 6);
	return (0);
}

./rush00 4 4 | ./rush-2

./rush-2 "./rush03 4 4"

o---o
|
|

rush02 4 4 rush03 4 4
