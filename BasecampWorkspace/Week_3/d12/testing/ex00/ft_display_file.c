/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:27:34 by acastano          #+#    #+#             */
/*   Updated: 2021/06/10 20:34:23 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
# define BUF_SIZE 420

int ft_display_file(char *argv)
{
	int fd;
	int ret;

	char buf(BUF_SIZE + 1);

	fd = open(*argv, O_RDONLY, S_IRUSR);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	while (ret = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
		ft_putnbr(ret);
		ft_putstr(buf);
	}

	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	ft_display_file(argv[2]);
	return (0);
}
