/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 13:55:14 by ahaavist          #+#    #+#             */
/*   Updated: 2021/06/13 14:47:48 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*rush(int a, int b, char *str);

int		main(void)
{
	int x;
	int y;
	char *str;
	int lengthplusend;
	//int length;

	x = 1;
	y = 3;
	lengthplusend = ((x * y) + y + 1);
	//length = (x * y);
	str = (char*)malloc(sizeof(char) * lengthplusend);
	//str = (char*)malloc(sizeof(char) * length);
	str = rush(x, y, str);
	//write(1, str, lengthplusend);
	write(1, str, lengthplusend);
	free(str);
	return (0);
}
