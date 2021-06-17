/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dankwon <dankwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 20:45:53 by dankwon           #+#    #+#             */
/*   Updated: 2021/06/16 16:22:23 by dankwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	bsq(int *argc, char **argv)
{
	t_unsigned i;

	i = 0;
	if (*argv > 1)
		while (++i < *argc)
		{
			if (read_file(argv[i] == 1))
				write(1, "map error\n", 10);
		}
	else
		read_stdin();
}
