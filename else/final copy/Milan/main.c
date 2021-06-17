/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudez <mrudez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:00:07 by mrudez            #+#    #+#             */
/*   Updated: 2021/06/15 19:10:31 by mrudez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

char	*copybuff(char *buff, int	bufsize)
{
	char	*newbuf;
	int		i;

	newbuf = malloc(bufsize);
	i = 0;
	while (i < bufsize)
	{
		newbuf[i] = buff[i];
		i++;
		printf("buff size %i \n", bufsize);
		write(1, &buff[i], 1);
		printf("\n");
	}
	return (newbuf);
}


int		ft_read(int fd)
{
	char	*mainbuff;
	char	*cpbuff;
	char	sm_buff[1];
	int		bufsize;
	int		b_read;

	mainbuff = malloc(BUFF_SIZE);
	bufsize = BUFF_SIZE;
	if (!bufsize)
		return (1);
	b_read = 0;
	while (read(fd, sm_buff, 1))
	{
		//printf("buff size %i \n", bufsize);
		if (b_read > bufsize)
		{
			cpbuff = copybuff(mainbuff, bufsize);
			bufsize += bufsize;
			mainbuff = copybuff(cpbuff, bufsize);
		}
		mainbuff[b_read] = sm_buff[0];
		b_read++;
	}
	mainbuff[b_read] = '\0';
	b_read = 0;
	while (mainbuff[b_read])
	{
		write(1, &mainbuff[b_read], 1);
		b_read++;
	}
	return (0);
	//creategrid(mainbuff);
}

int		filefd(char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return(ft_err());
	ft_read(fd);
	if (close(fd) == -1)
		return(ft_err());
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	
	if (argc == 1)
		ft_read(0);
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			filefd(argv[i++]);
		}
	}
	return (0);
}
