/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkinnune <jkinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:16:04 by jkinnune          #+#    #+#             */
/*   Updated: 2021/06/06 17:34:56 by jkinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		checker(char **grid, int row, int col, char num);
int		ft_squares(char **grid, int row, int col, char num);
int		solver(char **grid, int row, int col);
int		lettercheck(char *str);
int		ft_errors(int argc, char **argv);
void	print(char **arr);

#endif
