/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 16:09:53 by swilliam          #+#    #+#             */
/*   Updated: 2021/05/29 18:49:29 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** variableorproperty *= expression
** var1 = 10;
** var2 = 3;
** (var1 *= var2) = 30
**
** for ( init; condition; increment ) {
**	   statement(s);}
**
** printf("!\%d = %llu", nb, fact);
*/

int			ft_iterative_factorial(int nb)
{
	int		i;
	int		fact;

	fact = 1;
	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i <= nb)
	{
		fact = i * fact;
		i++;
	}
	return (fact);
}
