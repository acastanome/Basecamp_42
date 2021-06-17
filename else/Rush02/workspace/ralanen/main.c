/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:35:15 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/12 14:58:59 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "protos.h"
#define BUF_SIZE 8192

int	ft_read(int fd)
{
	int ret;
	char buf[BUF_SIZE + 1];

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}	
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1 && argv[0])
	{
		if (ft_read(0) == -1)
			return (1);
	}
	return (0);
}
