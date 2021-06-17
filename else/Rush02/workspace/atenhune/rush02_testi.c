/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_testi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:45:34 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/13 14:36:04 by atenhune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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
	ret = read(fd, buf, BUF_SIZE);

	buf[ret] = '\0';
		//printf("%s", buf);
		//what_dimensions(buf);

	str = (char*)malloc(sizeof(char) * ret);
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
	int *xandy;
	char *arg;
	char *str;
	int i;

	i = 0;
	/*if(argc < 2)
	{
		write(1, "Give me an argument\n", 21);
		return(0);
	}
	
	if(!(check_if_any_rush(argc, argv)))
	{
		write(1, "Not a rush\n", 13);
	}
	if(check_if_any_rush(argc, argv))
	{
		write(1, "Might be a rush\n", 16);
	}*/
	//what_dimensions(argc, argv);
	arg =ft_read(0);
	printf("%s", arg);
	/*
	xandy=what_dimensions("asd\nasd\nasd\nasd\nasd\nasd\nasd\nasd\n");
	while(i < 2)
	{
		printf("%i", xandy[i]);
		i++;
	}
	printf("\n");
	str = rush((xandy[0]), (xandy[1]));
	if(ft_strcmp(str, str) == 0)
	{
		printf("[rush-00] [");
		printf("%i", xandy[0]);
		printf("] [");
		printf("%i", xandy[1]);
		printf("]\n");
		
	}
	else
	{
		printf("jotain muuta\n");
	}*/
	return (0);
}