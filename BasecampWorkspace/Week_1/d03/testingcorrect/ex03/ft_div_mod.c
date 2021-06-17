/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:04:44 by acastano          #+#    #+#             */
/*   Updated: 2021/05/29 14:09:30 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a;
	int b;
	int c;
	int d;
	int *ptr1;
	int *ptr2;

	a = 10;
	b = 3;
	c = 5;
	d = 6;
	ptr1 = &c;
	ptr2 = &d;
	printf("originaly  ptr1 is pointing to c whose value is %d ptr2 is d %d\n", a, b);
	ft_div_mod(a, b, ptr1, ptr2);
	printf("after ft_div_mod a is %d and b is %d\n", c, d);
	return (0);
}
