/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tesfile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:45:34 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/13 17:11:49 by atenhune         ###   ########.fr       */
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}
void	ft_putnbr(int nb)
{
	long	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = long_nb * -1;
	}
	if (long_nb >= 10)
	{
		ft_putnbr(long_nb / 10);
		ft_putnbr(long_nb % 10);
	}
	else
	{
		ft_putchar('0' +  long_nb);
	}
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