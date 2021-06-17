/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heads.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:54:43 by wvaisane          #+#    #+#             */
/*   Updated: 2021/06/16 20:41:26 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADS_H
# define FT_HEADS_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, int n);
int		ft_atoi(char *str);
char	**create_grid(char *str, int x, int y);
char	*pick_foe(char *str);
int		pick_x(char *str);
int		pick_y(char *str);
void	fill(char **grid, int side, int *crd, char f);
void    print(char **grid, int x, int y);

#endif
