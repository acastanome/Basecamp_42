/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudez <mrudez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:18:22 by mrudez            #+#    #+#             */
/*   Updated: 2021/06/15 19:02:33 by mrudez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <errno.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# define BUFF_SIZE 4

typedef struct		s_map
{
	int		lines;
	int		width;
	char	empty;
	char	obstacle;
	char	full;
	int		**map;
}					t_map;
int					ft_err(void);
int					filefd(char *file);
void				ft_putstr(char *str);
int					ft_read(int fd);

#endif
