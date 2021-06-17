/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:27:23 by acastano          #+#    #+#             */
/*   Updated: 2021/06/02 14:44:51 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < (n - 1)) && (s1[i] != '\0'))
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

	i = strncmp(s1, s2, 3);
	j = ft_strncmp(s1, s2, 3);

	printf("strncmp: %d\nft_strncmp: %d\n\n\n", i, j);

	i = strncmp("hello", "world", 3);
	j = ft_strncmp("hello", "world", 3);

	printf("strncmp: %d\nft_strncmp: %d\n\n\n", i, j);

	return (0);
}
