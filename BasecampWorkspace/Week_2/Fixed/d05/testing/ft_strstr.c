/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:54:42 by acastano          #+#    #+#             */
/*   Updated: 2021/06/02 12:08:27 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[x])
		{
			i++;
			x++;
			while ((str[i] == to_find[x]) && (to_find[x] != '\0'))
			{
				i++;
				x++;
			}
			if (to_find[x] == '\0')
				return (str + i - x);
			x = 0;
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char str1[] = "Hello World";
	char str2[] = "orld";
	char *c = ft_strstr(str1, str2);
	printf("result should be %s, test is %s\n", str2, c); //same

	char str7[] = "Hello World b";
	char str8[] = "World";
	char *cb = ft_strstr(str7, str8);
	printf("result should be World b, test is %s\n", cb); //because returns pointer to first occurence and printf shows all the string from there until '\0'

	char str3[] = "Hello World\n";
	char str4[] = "world\n";
	char *c2 = ft_strstr(str3, str4);
	printf("result should be (null), test is %s\n", c2); //lowercase

	char str5[] = "Hello World\n";
	char str6[] = "old\n";
	char *c3 = ft_strstr(str5, str6);
	printf("result should be (null), test is %s\n", c3); //missing the l
	return (0);
}
