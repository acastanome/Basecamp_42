/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:33:25 by acastano          #+#    #+#             */
/*   Updated: 2021/06/11 20:44:08 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree *curr;

	applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left);
	if (root->right)
		btree_apply_prefix(root->right);
}
