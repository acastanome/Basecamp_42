/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:26:30 by acastano          #+#    #+#             */
/*   Updated: 2021/06/03 10:23:02 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		x = s1[i] - s2[i];
		if (x != 0)
		{
			return (x);
			i++;
		}
	}
	return (0);
}

int main (void)
{
	int i = 0;
	int j = 0;

	char s1[] = "hello";
	char s2[] = "world";

	i = strcmp(s1, s2);
	j = ft_strcmp(s1, s2);

	printf("strcmp -15: %d\nft_strcmp -15: %d\n\n\n", i, j);

	i = strcmp("hello", "world");
	j = ft_strcmp("hello", "world");

	printf("strcmp -1: %d\nft_strcmp -15: %d\n\n\n", i, j);

	return (0);
}
