/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evalexpr.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 20:31:55 by itkimura          #+#    #+#             */
/*   Updated: 2021/06/13 20:42:23 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVALEXPR_H
# define FT_EVALEXPR_H

# include "stdlib.h"
# include "unistd.h"

int		ft_add(int n1, int n2);
int		ft_sub(int n1, int n2);
int		ft_mul(int n1, int n2);
int		ft_div(int n1, int n2);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
