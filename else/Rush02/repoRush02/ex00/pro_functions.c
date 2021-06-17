/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 19:45:19 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/13 20:11:54 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 4096

int			*what_dimensions(char *str)
{
	int	*xandy;
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	xandy = (int*)malloc(sizeof(int) * 2);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			y++;
			x = i / y;
		}
		i++;
	}
	xandy[0] = x;
	xandy[1] = y;
	return (xandy);
}

char		*ft_read(int fd)
{
	int		i;
	char	*str;
	int		ret;
	char	buf[BUF_SIZE + 1];

	i = 0;
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
	}
	str = (char*)malloc(sizeof(char) * ret + 1);
	while (i < ret)
	{
		str[i] = buf[i];
		i++;
	}
	str[i + 1] = '\0';
	return (str);
}

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int ft_comprush0X(char *arg, int *xandy, char *strX, int rnum, int a)
{
	if(ft_strcmp(strX, arg) == 0)
	{
		if (a != 0)
			write(1, " || ", 4);
		ft_putstr("[rush-0%d] [", rnum);
		ft_putstr("%d] [", xandy[0]);
		ft_putstr("%d]", xandy[1]);
		return(0);
	}
	return (1);
}

void ft_comp_all_rushes(void)
{
	if (ft_comprush0X(arg, xandy, str0, rnum, a) == 0)
		a++;
	if (ft_comprush0X(arg, xandy, str1, rnum, a) == 0)
		a++;
	if (ft_comprush0X(arg, xandy, str2, rnum, a) == 0)
		a++;
	if (ft_comprush0X(arg, xandy, str3, rnum, a) == 0)
		a++;
	if (ft_comprush0X(arg, xandy, str4, rnum, a) == 0)
		a++;
	if (a != 0)
		write(1, "\n", 1);
}
