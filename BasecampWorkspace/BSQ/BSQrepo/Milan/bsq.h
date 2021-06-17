/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudez <mrudez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:18:22 by mrudez            #+#    #+#             */
/*   Updated: 2021/06/16 15:17:12 by mrudez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <errno.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# define BUFF_SIZE 400

typedef struct		s_map
{
	int		lines;
	int		length;
	char	empty;
	char	obstacle;
	char	full;
	int		**map;
}					t_map;
int					ft_err(void);
int					filefd(char *file);
void				ft_putstr(char *str);
int					ft_read(int fd);
void				gridinit(char *buff);
void				ft_meta(char *meta, int len);
char				**creategrid(t_map map, char **argv);

#endif
