/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 10:00:00 by acastano          #+#    #+#             */
/*   Updated: 2021/06/05 11:48:19 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);//for displaying error message chars

void	ft_putstr(char *str);////for displaying error message

sthg		sudoku(sthg);//thy function. Types not yet known

int main(int argc, char **argv)//in case of error display "Error" followed by a line break
{
	if (argc != 10)//user should feed 9 lines in as arguments + name of prog
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_sudoku();//takes the lines and runs the program that solves the sudoku
	//argv[1] to argv[10]
	//or
	//make a grid to hold it all and pass that in.
return (0);
}
