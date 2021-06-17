/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:51:43 by swilliam          #+#    #+#             */
/*   Updated: 2021/05/29 19:11:18 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_power(int nb, int power)
{
	int		calc;
	int		i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	calc = nb;
	i = power - 1;
	while (i--)
		calc *= nb;
	return (calc);
}
