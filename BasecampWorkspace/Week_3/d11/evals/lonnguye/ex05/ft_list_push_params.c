/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:57:01 by lonnguye          #+#    #+#             */
/*   Updated: 2021/06/09 19:52:59 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*replace;

	if (ac < 1)
		return (NULL); 
	i = 0;
	list = 0;
	while (i < ac)
	{
		replace = ft_create_elem(av[i]);
		replace->next = list;
		list = replace;
		i++;
	}
	return (list);
}
