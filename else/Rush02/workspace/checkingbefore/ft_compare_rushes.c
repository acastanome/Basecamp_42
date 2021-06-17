/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_rushes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 18:48:44 by acastano          #+#    #+#             */
/*   Updated: 2021/06/13 19:41:01 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




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

int ft_comprush0X(char *arg, int *xandy, char *strX, int rnum, int a)
{
	if(ft_strcmp(strX, arg) == 0)
	{
		if (a != 0)
			write(1, " || ");
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
