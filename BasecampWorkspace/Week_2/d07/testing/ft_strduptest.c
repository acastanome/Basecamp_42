/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strduptest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:57:28 by acastano          #+#    #+#             */
/*   Updated: 2021/06/04 08:11:24 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int		main(void)
{
	char *str1;
	char *str2;

	str1 = "What on earth is this";
	str2 = ft_strdup(str1);
	printf("%s\n", str2);
	return (0);
}
