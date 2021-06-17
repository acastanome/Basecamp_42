/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:47:49 by acastano          #+#    #+#             */
/*   Updated: 2021/06/02 15:06:04 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < 91))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char s1[] = "WatermelonN\n";
	char s2[] = "WaTeR melOn2\n";
	char s3[] = "wateRmelon \n";
	char s4[] = "watermelon2\n";

	printf("test1 should return watermelonn, returns: %s\n", ft_strlowcase(s1));
	printf("test1 should return water melon2, returns: %s\n", ft_strlowcase(s2));
	printf("test1 should return watermelon , returns: %s\n", ft_strlowcase(s3));
	printf("test1 should return watermelon2, returns: %s\n", ft_strlowcase(s4));

	return (0);
}
