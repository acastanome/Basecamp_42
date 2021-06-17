/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_foe.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:15:57 by wvaisane          #+#    #+#             */
/*   Updated: 2021/06/16 08:09:00 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_heads.h"

char	*pick_foe(char *str)
{
	char	*foe;
	int		k;

	k = 0;
	while (str[k] != '\n')
	{
		k++;
	}
	foe = (char *)malloc(sizeof(char) * 4);
	foe[0] = str[k - 1]; // f fill
	foe[1] = str[k - 2]; // o obsticle
	foe[2] = str[k - 3]; // e empty
	foe[3] = '\0';
	return (foe);
}
