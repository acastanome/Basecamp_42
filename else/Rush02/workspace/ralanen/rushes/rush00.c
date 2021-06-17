/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:05:13 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/13 12:50:57 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


char	*rush(int x, int y)
{
	char *str;
	int xc;
	int yc;
	int i;
	
	str = (char*)malloc(sizeof(char) * (x * y));
	xc = 0;
	yc = 0;
	while (yc < y)
	{
		while (xc < x)
		{
			if ((xc == 0 && yc == 0) || (xc == (x - 1) && yc == 0)
			|| (xc == 0 && yc == (y - 1)) || (xc == (x - 1) && yc == (y - 1)))
				{
					str[i]='o';
					i++;
				}	
			else if ((xc == 0 && yc > 0 && yc < (y - 1))
			|| (xc == (x - 1) && yc > 0 && yc < (y - 1)))
				{
					str[i]=('|');
					i++;
				}	
			else if (xc < (x - 1) && xc > 0 && yc > 0 && yc < (y - 1))
				{
					str[i]=(' ');
					i++;
				}	
			else
			{
				str[i]=('-');
				i++;
			}	
			xc++;
		}
		str[i]=('\n');
		i++;
		yc++;
		xc = 0;
	}
	str[i+1] = '\0';
	return(str);
}
