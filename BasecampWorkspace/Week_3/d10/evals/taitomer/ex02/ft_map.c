/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:11:57 by taitomer          #+#    #+#             */
/*   Updated: 2021/06/08 09:20:10 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*palautus;

	i = 0;
	palautus = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		palautus[i] = f(tab[i]);
		i++;
	}
	return (palautus);
	free(palautus);
}
