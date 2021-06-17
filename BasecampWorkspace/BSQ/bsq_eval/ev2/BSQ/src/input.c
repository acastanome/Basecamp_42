/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dankwon <dankwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:11:33 by dankwon           #+#    #+#             */
/*   Updated: 2021/06/15 22:16:39 by dankwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_unsigned	read_file(char *file)
{
	int fd;

	fd = open(file, O_DIRECTORY);
	if (fd >= 0)
		return (1);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (1);
	if (prepare_read(&fd) == 1)
		return (1);
	return (0);
}

t_unsigned	read_stdin(void)
{
	int fd;

	fd = 0;
	if (prepare_read(&fd))
		return (1);
	return (0);
}
