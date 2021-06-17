/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:47:49 by acastano          #+#    #+#             */
/*   Updated: 2021/06/02 18:33:41 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
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

	printf("test1 should return WATERMELONN, returns: %s\n", ft_strupcase(s1));
	printf("test1 should return WATER MELON2, returns: %s\n", ft_strupcase(s2));
	printf("test1 should return WATERMELON , returns: %s\n", ft_strupcase(s3));
	printf("test1 should return WATERMELON2, returns: %s\n", ft_strupcase(s4));

	return (0);
}
