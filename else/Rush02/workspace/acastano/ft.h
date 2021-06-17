/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:21:37 by acastano          #+#    #+#             */
/*   Updated: 2021/06/12 21:14:37 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stdlib.h> // for malloc
#include <unistd.h> //for write in putchar

void	rush(int a, int b); //for rushes
void	ft_putchar(char c); //for rushes
t_dim	what_dimensions(char *str); //for getting input x and y

#endif

/*
check_valid
check duplicate inputs rush00 rush00
int		ft_errors(int argc, char **argv);
void	print(char **arr);
*/
