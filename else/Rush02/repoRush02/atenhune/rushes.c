/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 20:23:49 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/13 20:26:55 by atenhune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*rush00(int x, int y)
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
void	*rush01(int x, int y)
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
			if ((xc == 0 && yc == 0) ||
			(xc > 1 && yc > 1 && (xc == (x - 1) && yc == (y - 1))))
			{
				str[i] = ('/');
				i++;
			}
			else if ((xc == (x - 1) && yc == 0) || (xc == 0 && yc == (y - 1)))
			{
				str[i] = ('\\');
				i++;
			}
			else if ((xc > 0 && xc < (x - 1))
			&& (yc > 0 && yc < (y - 1)))
			{
				str[i] = (' ');
				i++;
			}
			else
			{
				str[i] = ('*');
				i++;
			}
			xc++;
		}
		str[i] = ('\n');
		i++;
		yc++;
		xc = 0;
	}
	str[i + 1] = '\0';
	return (str);
}
void	*rush02(int x, int y)
{
	char *str;
	int x_c;
	int y_c;
	int i;

	str = (char*)malloc(sizeof(char) * (x * y));
	x_c = 0;
	y_c = 0;
	while (y_c < y)
	{
		while (x_c < x)
		{
			if ((x_c == 0 && y_c == 0)
			|| (x_c == (x - 1) && y_c == 0))
			{
				str[i] = ('A');
				i++;
			}
			else if ((x_c == (x - 1) && y_c == (y - 1))
			|| (x_c == 0 && y_c == (y - 1)))
			{
				str[i] = ('C');
				i++;
			}
			else if ((x_c > 0 && x_c < (x - 1)) && (y_c > 0 && y_c < (y - 1)))
			{
				str[i] = (' ');
				i++;
			}
			else
			{
				str[i] = ('B');
				i++;
			}
			x_c++;
		}
		str[i] = ('\n');
		i++;
		y_c++;
		x_c = 0;
	}
	str[i + 1] = '\0';
	return (str);
}
void	*rush03(int x, int y)
{
	char *str;
	int x_c;
	int y_c;
	int i;

	str = (char*)malloc(sizeof(char) * (x * y));
	x_c = 0;
	y_c = 0;
	while (y_c < y)
	{
		while (x_c < x)
		{
			if ((x_c == 0 && y_c == 0)
			|| (x_c == 0 && y_c == (y - 1)))
			{
				str[i] = ('A');
				i++;
			}
			else if ((x_c == (x - 1) && y_c == 0)
			|| (x_c == (x - 1) && y_c == (y - 1)))
			{
				str[i] = ('C');
				i++;
			}
			else if ((x_c > 0 && x_c < (x - 1)) && (y_c > 0 && y_c < (y - 1)))
			{
				str[i] = (' ');
				i++;
			}
			else
			{
				str[i] = ('B');
				i++;
			}
			x_c++;
		}
		str[i] = ('\n');
		i++;
		y_c++;
		x_c = 0;
	}
	str[i + 1] = '\0';
	return (str);
}
void	*rush04(int x, int y)
{
	char *str;
	int x_c;
	int y_c;
	int i;

	str = (char*)malloc(sizeof(char) * (x * y));
	x_c = 0;
	y_c = 0;
	while (y_c < y)
	{
		while (x_c < x)
		{
			if ((x_c == 0 && y_c == 0)
			|| (x_c == (x - 1) && y_c == (y - 1) && x_c > 1 && y_c > 1))
			{
				str[i] = ('A');
				i++;
			}
			else if ((x_c == (x - 1) && y_c == 0)
			|| (x_c == 0 && y_c == (y - 1)))
			{
				str[i] = ('C');
				i++;
			}
			else if ((x_c > 0 && x_c < (x - 1)) && (y_c > 0 && y_c < (y - 1)))
			{
				str[i] = (' ');
				i++;
			}
			else
			{
				str[i] = ('B');
				i++;
			}
			x_c++;
		}
		str[i] = ('\n');
		i++;
		y_c++;
		x_c = 0;
	}
	str[i + 1] = '\0';
	return (str);
}
