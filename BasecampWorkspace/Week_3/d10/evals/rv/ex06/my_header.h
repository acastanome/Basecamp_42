/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:45:08 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/06/08 13:45:36 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER_H
# define MY_HEADER_H

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		check_acav(int ac, char **av);
int		sum_nums(int a, int b);
int		minus_nums(int a, int b);
int		div_nums(int a, int b);
int		mul_nums(int a, int b);
int		mod_nums(int a, int b);
void	ft_putstr(char *str);
int		operations(int a, char b, int c);

#endif
