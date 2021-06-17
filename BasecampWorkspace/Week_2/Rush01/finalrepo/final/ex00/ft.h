/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:16:04 by jkinnune          #+#    #+#             */
/*   Updated: 2021/06/06 19:40:46 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		checker(char **grid, int row, int col, char num);
int		ft_squares(char **grid, int row, int col, char num);
int		check_valid_sudoku(char **grid);
int		solver(char **grid, int row, int col);
int		lettercheck(char *str);
int		duplicateletter(char *str);
int		ft_errors(int argc, char **argv);
void	print(char **arr);

#endif
