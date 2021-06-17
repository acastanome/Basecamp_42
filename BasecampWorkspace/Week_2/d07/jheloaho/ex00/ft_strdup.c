/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:45:02 by jheloaho          #+#    #+#             */
/*   Updated: 2021/06/03 15:37:40 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*str;
	int		len;
	char	*copy;

	len = 0;
	while (src[len])
	{
		len++;
	}
	str = malloc(len + 1);
	copy = str;
	while (*src)
	{
		*copy++ = *src++;
	}
	*copy = '\0';
	return (str);
}
