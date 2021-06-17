/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone_13.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 15:14:44 by acastano          #+#    #+#             */
/*   Updated: 2021/06/12 09:49:25 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rot_13(char *str)
{
	while (*str)
	{
		if (((*str >= 97) && (*str < 122)) || ((*str >= 65) && (*str < 90)))
			ft_putchar(*str + 13);
		else if ((*str == 122) || (*str == 90))
			ft_putchar(*str - 13);
		else
			ft_putchar(*str);
		str++;
	}
}

int		rot_13_main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write (1, &c, 1);
	return (0);
}
