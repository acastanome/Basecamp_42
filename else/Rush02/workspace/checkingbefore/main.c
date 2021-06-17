/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:45:34 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/13 19:04:51 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h> //not allowed
#include <stdlib.h>
#define BUF_SIZE 4096

int check_if_any_rush(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i <= argc)
	{
		while(argv[i][j] != '\0')
		{
			if(argv[i][j] == 'o' || argv[i][j] == '-' || argv[i][j] == '|' || argv[i][j] == ' ' || argv[i][j] == '/' || argv[i][j] == '\\' || argv[i][j] == '*'
			|| argv[i][j] == 'A' || argv[i][j] == 'B' || argv[i][j] == 'C')
			{
				j++;
			}
			else
			{
				return (0);
			}
		}
		return (1);
	}
	return(1);
	
}
int *what_dimensions(char *str)
{
	int *xandy;
	int i;
	int x;
	int y;
	
	i = 0;
	x = 0;
	y = 0;
	xandy=(int*)malloc(sizeof(int) * 2);
	while(str[i] != '\0')
	{
		if(str[i] == '\n')
		{
			y++;
			x = i / y;
		}
		i++;
	}
	xandy[0]=x;
	xandy[1]=y;
	
	//printf("%d ", x);
	//printf("%d\n", y);
	return(xandy);
}

char	*ft_read(int fd)
{
	int i;
	char *str;
	int ret;
	char buf[BUF_SIZE + 1];

	i = 0;

	while((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
	}		
	
	//printf("%s\n", buf);
	str = (char*)malloc(sizeof(char) * ret + 1);
	
	while (i < ret)
	{
		str[i] = buf[i];
		i++;
	}
	str[i+1] = '\0';
	//printf("%s\n", str);*/
	//printf("%s\n", buf);
	//what_dimensions(buf);
	return (str);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

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
arg =ft_read(0);
xandy=what_dimensions(arg);
str0 = rush00((xandy[0]), (xandy[1]));
str1 = rush01((xandy[0]), (xandy[1]));
str2 = rush02((xandy[0]), (xandy[1]));
str3 = rush03((xandy[0]), (xandy[1]));
str4 = rush04((xandy[0]), (xandy[1]));
int rnum;
int a;
rnum = 0;
a = 0;

int ft_comprush0X(char *arg, int *xandy, char *strX, int rnum)
{
	if(ft_strcmp(strX, arg) == 0)
	{
		ft_putstr("[rush-0%d] [", rnum);
		ft_putstr("%d] [", xandy[0]);
		ft_putstr("%d]\n", xandy[1]);
		return(0);
	}
	return (1);
}

if (ft_comprush0X(arg, xandy, str0, rnum) == 0)
	a++;
if (ft_comprush0X(arg, xandy, str1, rnum) == 0)
	a++;
else if (ft_comprush0X(arg, xandy, str2, rnum) == 0)
	a++;
if (ft_comprush0X(arg, xandy, str3, rnum) == 0)
{
	if (a != 0)
		write(1, " || ");
	a++;
}
if (ft_comprush0X(arg, xandy, str4, rnum) == 0)
	a++;
