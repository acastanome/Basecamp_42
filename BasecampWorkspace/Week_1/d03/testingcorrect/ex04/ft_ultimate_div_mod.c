/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:10:31 by acastano          #+#    #+#             */
/*   Updated: 2021/05/29 18:51:02 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*void	ft_ultimate_div_mod(int *a, int *b)
{
	int d;
	int r;

	d = (*a / *b);
	r = (*a % *b);
	*a = d;
	*b = r;
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *a / *b;
	*b = hold % *b;
}

int		main(void)
{
	int c;
	int d;
	int *ptr1;
	int *ptr2;

	c = 20;
	d = 3;
	ptr1 = &c;
	ptr2 = &d;
	printf("%d should be 20\n", c);
	printf("%d should be 3\n", d);
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%d should be 6\n", c);
	printf("%d should be 2\n", d);
	return (0);
}
