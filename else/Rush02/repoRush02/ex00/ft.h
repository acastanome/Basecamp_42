/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:21:37 by acastano          #+#    #+#             */
/*   Updated: 2021/06/13 20:18:37 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>

char	*rush(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		*what_dimensions(char *str);
char	*ft_read(int fd);
int		ft_strcmp(char *s1, char *s2);
int		ft_comprush0X(char *arg, int *xandy, char *strX, int rnum, int a);
void	ft_comp_all_rushes(void);
char	*rush00(int x, int y)

#endif
