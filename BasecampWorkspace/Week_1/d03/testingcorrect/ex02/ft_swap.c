/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:00:54 by acastano          #+#    #+#             */
/*   Updated: 2021/05/29 12:33:46 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int a;
	int b;
	int *ptr1;
	int *ptr2;

	a = 3;
	b = 4;
	ptr1 = &a;
	ptr2 = &b;
	printf("a should be 3: %d and b should be 4: %d\n", a, b);
	ft_swap(ptr1, ptr2);
	printf("now they are swaped so a should be 4: %d and b should be 3: %d\n", a, b);
	return (0);
}
