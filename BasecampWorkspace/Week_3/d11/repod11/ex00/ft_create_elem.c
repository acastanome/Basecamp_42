/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:49:46 by acastano          #+#    #+#             */
/*   Updated: 2021/06/10 10:35:08 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (0);
	element->data = data;
	element->next = NULL;
	return (element);
}



x= +-3;

printf("%d", x);