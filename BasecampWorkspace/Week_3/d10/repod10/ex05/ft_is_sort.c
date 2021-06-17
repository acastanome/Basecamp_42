/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:34:01 by acastano          #+#    #+#             */
/*   Updated: 2021/06/08 20:42:29 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length)
	{
		while (f(tab[i], tab[i + 1]) == 1)
			if(f(tab[i], tab[i + 1]) == )
		
		i++;
	}
	if (result == 0 || result == (-length) || result == length)
		return (1);
	return (0);
}
