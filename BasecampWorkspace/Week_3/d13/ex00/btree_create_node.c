/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 09:41:19 by acastano          #+#    #+#             */
/*   Updated: 2021/06/11 20:16:13 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *new_node;

	new_node = (t_btree *)malloc(sizeof(t_btree));
	if (!new_node)
		return (0);
	new_node->left = 0;
	new_node->right = 0;
	new_node->item = item;
	return (new_node);
}
