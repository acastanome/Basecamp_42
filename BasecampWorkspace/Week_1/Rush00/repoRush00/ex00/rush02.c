/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:36:26 by ahaavist          #+#    #+#             */
/*   Updated: 2021/05/30 16:41:10 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_them(int a, char c1, char c2, char c3)
{
	ft_putchar(c1);
	while (a > 2)
	{
		ft_putchar(c2);
		a--;
	}
	if (a > 1)
	{
		ft_putchar(c3);
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	if (a <= 0 || b <= 0)
	{
		return ;
	}
	print_them(a, 'A', 'B', 'A');
	while (b > 2)
	{
		print_them(a, 'B', ' ', 'B');
		b--;
	}
	if (b > 1)
	{
		print_them(a, 'C', 'B', 'C');
	}
}
