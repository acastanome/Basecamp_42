/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:27:23 by acastano          #+#    #+#             */
/*   Updated: 2021/06/02 18:33:18 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0' || i == n)
		return (0);
	else
		return (-s2[i]);
}

int main (void)
{
	int i = 0;
	int j = 0;

	char s1[] = "hello";
	char s2[] = "world";

	i = strncmp(s1, s2, 3);
	j = ft_strncmp(s1, s2, 3);

	printf("strncmp: %d\nft_strncmp: %d\n\n\n", i, j);

	i = strncmp("hello", "world", 3);
	j = ft_strncmp("hello", "world", 3);

	printf("strncmp: %d\nft_strncmp: %d\n\n\n", i, j);

	return (0);
}
