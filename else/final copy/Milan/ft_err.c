/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 20:00:53 by mrudez            #+#    #+#             */
/*   Updated: 2021/06/16 13:49:40 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_err(void)
{
	if (errno == EACCES)
		ft_putstr("Permission denied\n");
	else if (errno == EISDIR)
		ft_putstr("Is a directory\n");
	else if (errno == ENOENT)
		ft_putstr("No such file or directory\n");
	else if (errno == EINTR)
		ft_putstr("Interrupted system call\n");
	else
		ft_putstr("map error\n");
	return (0);
}
