/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:08:00 by lonnguye          #+#    #+#             */
/*   Updated: 2021/06/10 17:06:05 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

#define BUF_SIZE 4096

int main(int argc, char **argv)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}	
	else if (argc >= 3)
	{
		ft_putstr("Too many arguments\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
