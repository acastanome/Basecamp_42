/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:12:43 by acastano          #+#    #+#             */
/*   Updated: 2021/06/12 08:40:13 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		write(1, &c, 1);
		++str;
	}
}

int		main(void)
{
	int			x;
	int			*p;
	t_btree		*node1;

	x = 3;
	p = &x;
	node1 = btree_create_node(p);
	printf("%d", node1->item);
	return (0);
}
