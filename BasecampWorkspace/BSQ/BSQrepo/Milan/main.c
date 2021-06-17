/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudez <mrudez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:00:07 by mrudez            #+#    #+#             */
/*   Updated: 2021/06/16 15:26:07 by mrudez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

char	*tocopybuf(char *from, int size)
{
	char	*newbuf;
	int		i;

	newbuf = malloc(size);
	i = 0;
	while (i < size + 1)
	{
		if (from[i] != '\0')
			newbuf[i] = from[i];
		i++;
	}
	free(from);
	return (newbuf);
}

char	*fromcopybuf(char *from, int size)
{
	char	*newbuf;
	int		i;

	newbuf = malloc(size);
	i = 0;
	while (i < size - BUFF_SIZE + 1)
	{
		if (from[i] != '\0')
			newbuf[i] = from[i];
		i++;
	}
	free(from);
	printf("%lu/n", sizeof(newbuf));
	return (newbuf);
}

int		ft_read(int fd)
{
	char	*mainbuf;
	char	*cbuf;
	int		curbufsize;
	char	buf_sml[1];
	int		b_read;

	mainbuf = malloc(BUFF_SIZE);
	curbufsize = BUFF_SIZE;
	b_read = 0;
	while (read(fd, buf_sml, 1))
	{
		if (b_read > curbufsize)
		{
			cbuf = tocopybuf(mainbuf, curbufsize);
			curbufsize += BUFF_SIZE;
			mainbuf = fromcopybuf(cbuf, curbufsize);
		}
		mainbuf[b_read] = buf_sml[0];
		b_read++;
	}
	mainbuf[b_read] = '\0';
	//gridinit(mainbuf);
	return (0);
}

int		filefd(char *file)
{
	int		fd;
	int		res;

	res = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (ft_err());
	ft_read(fd);
	if (close(fd) == -1)
		return (ft_err());
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		res;

	res = 0;
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
