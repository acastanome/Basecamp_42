/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_modcopy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:04:44 by acastano          #+#    #+#             */
/*   Updated: 2021/05/28 01:29:23 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_div_modcopy(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	printf("%d", *div);
	*mod = (a % b);
}

int main()
{
	int *ptr1;
	int *ptr2;
	ft_div_modcopy(10, 4, ptr1, ptr2);
	return (0);
}