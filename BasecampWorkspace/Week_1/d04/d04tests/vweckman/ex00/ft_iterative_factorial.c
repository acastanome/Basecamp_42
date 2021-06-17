/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vweckman <vweckman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:39:51 by vweckman          #+#    #+#             */
/*   Updated: 2021/05/29 15:39:07 by vweckman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;
	int i;

	a = 1;
	i = 1;
	if (nb >= 0 && nb <= 13)
	{
		while (i <= nb)
			a *= i + 1;
		return (a);
	}
	else
	{
		return (0);
	}
}
