/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:21:37 by acastano          #+#    #+#             */
/*   Updated: 2021/06/13 18:01:19 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stdlib.h> // for malloc
#include <unistd.h> //for write in putchar

char	*rush(int a, int b); //for rushes
void	ft_putchar(char c); //for rushes
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		*what_dimensions(char *str);
char	*ft_read(int fd);
int		ft_strcmp(char *s1, char *s2);

#endif

/*
check_valid
check duplicate inputs rush00 rush00
int		ft_errors(int argc, char **argv);
void	print(char **arr);
*/
