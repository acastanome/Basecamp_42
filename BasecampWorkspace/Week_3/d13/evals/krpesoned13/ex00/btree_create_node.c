/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krpesone <krpesone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:59:47 by krpesone          #+#    #+#             */
/*   Updated: 2021/06/10 12:13:22 by krpesone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *output;

	output = (t_btree*)malloc(sizeof(*output));
	output->left = NULL;
	output->right = NULL;
	output->item = item;
	return (output);
}
