/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudez <mrudez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:00:07 by mrudez            #+#    #+#             */
/*   Updated: 2021/06/15 09:01:47 by mrudez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_readstdin(void)
{
	char	*mainbuf;
	char	*currentbuf;
	char	buf_sml[1];
	int		currentbuffersize;
	int		bytes_read;
	//t_data	res; thinking about storing data in a structure
	mainbuf = malloc(BUFFER_SIZE);
	currentbuffersize = BUFFER_SIZE;
	bytes_read = 0;
	while (read(0, buf_sml, 1))
	{
		if (b_read > currentbuffersize)
		{
			currentbuf = copytobuff(mainbuff, currentbuffersize);
			currentbuffersize += BUFFER_SIZE;
			mainbuff = copyfrombuff(currentbuf, currentbuffersize);
		}
		mainbuff[bytes_read] = buf_sml[0];
		bytes_read++;
	}
	mainbuff[bytes_read] = '\0';
	create2darray(mainbuff);
}

void	readfile(char *string)
{
	int openfile;
}

int		main(int argc, char **argv)
{
	char	**arv;
	int		i;

	if (argc == 1)
	{
		arv = ft_readstdin();
		return (0);
	}
	i = 1;
	while (argv[i] != '\0')
	{
		readfile(argv[i]);
		i++;
	}
}
