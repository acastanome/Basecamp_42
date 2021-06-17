/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:32:58 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/06/08 13:46:56 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int		sum_nums(int a, int b)
{
	if ((a + b) > 2147483647)
		return (0);
	else if ((a + b) < -2147483648)
		return (0);
	else
		return (a + b);
}

int		minus_nums(int a, int b)
{
	if ((a - b) > 2147483647)
		return (0);
	else if ((a - b) < -2147483648)
		return (0);
	else
		return (a - b);
}

int		div_nums(int a, int b)
{
	if ((a / b) > 2147483647)
		return (0);
	else if ((a / b) < -2147483648)
		return (0);
	else
		return (a / b);
}

int		mul_nums(int a, int b)
{
	if ((a * b) > 2147483647)
		return (0);
	else if ((a * b) < -2147483648)
		return (0);
	else
		return (a * b);
}

int		mod_nums(int a, int b)
{
	if ((a % b) > 2147483647)
		return (0);
	else if ((a % b) < -2147483648)
		return (0);
	else
		return (a % b);
}
