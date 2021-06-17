/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:29:00 by acastano          #+#    #+#             */
/*   Updated: 2021/06/08 20:33:16 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (tab[i] != 0)
	{
		if (f(*(tab[i])) == 1)
			num++;
	}
	return (num);
}