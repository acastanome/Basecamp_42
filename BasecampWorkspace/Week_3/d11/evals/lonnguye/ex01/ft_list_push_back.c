/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:53:06 by lonnguye          #+#    #+#             */
/*   Updated: 2021/06/09 15:57:29 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*head;

	if (*begin_list != 0)
	{
		head = *begin_list;
		while (head->next != 0)
		{
			head = head->next;
		}
		head->next = ft_create_elem(data);
	}
	*begin_list = ft_create_elem;
}
