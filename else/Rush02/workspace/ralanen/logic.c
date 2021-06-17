/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:34:00 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/13 13:55:48 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Needs error handling

int	logic(char *str, int x, int y)
{

	
	//check if the first char is o
	if (str[0] == 'o')
		printf("rush-00" "%d" "%d", x, y);
	
	//check if the first char is /
	else if (str[0] == '/')
		printf("rush-02" "%d" "%d", x, y);
	
	//check if the first char is A and the parameters are only 1, 1
	else if (str[0] == 'A' && x == 1 && y == 1)
	{
		printf("rush-02" "%d" "%d", x, y);
		printf("rush-03 " "%d" "%d", x, y);
		printf("rush-04 " "%d" "%d", x, y);
	}
	
	//check if the last char on the first row is A, x needs to be more than 1!??
	else if (str[x -1] == 'A' && x > 1)
		printf("rush-02" "%d" "%d", x, y);
	
	//check if the last char on the first row is C and there is only one row
	else if (str[x - 1] == 'C' && y == 1)
	{
		printf("rush-03" "%d" "%d", x, y);
		printf("rush-04 " "%d" "%d", x, y);
	}

	//check if the last char in the whole string is C when there is more than 1 row DOESN'T WORK
	else if (str[(x * y)] == 'C')
		printf("rush-03" "%d" "%d", x, y);
	
	//check if the last char in the whole string is A when there is more than 1 row DOESN'T WORK
	else if (str[(x * y)] == 'A')
		printf("rush-04" "%d" "%d", x, y);
	return (0);
}

	
int	main(void)
{
	int x = 1;
	int y = 1;
	char str1[] = "ABC";

	logic(str1, x, y);
	return (0);
}


