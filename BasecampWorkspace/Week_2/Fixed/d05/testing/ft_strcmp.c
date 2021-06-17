/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:26:30 by acastano          #+#    #+#             */
/*   Updated: 2021/06/02 17:38:45 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
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
