/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:27:23 by acastano          #+#    #+#             */
/*   Updated: 2021/06/02 12:15:23 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	src[i] = dest[i];
	return (dest);
}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char str1[] = "Watermelon2\n";
	char str2[] = "Watermelon2\n";
	ft_strcpy(str2, str1);
	return (0);
}
*/

int    main(void)
{
    char str1[] = "123";
    char str2[] = "abcdefghi";

	printf("str1 originally: %s\n", str1);
	//ft_putstr(str1);
	//ft_putchar('\n');
	printf("str2 originally: %s\n", str2);
	//ft_putstr(str2);
	//ft_putchar('\n');
	strncpy(str1, str2, 6);
	//ft_putchar('\n');
	printf("str1 after strncpy: %s\n", str1);
	//ft_putstr(str1);
	//ft_putchar('\n');
	printf("str2 after strncpy: %s\n", str2);
	//ft_putstr(str2);
	ft_putchar('\n');

    char str3[] = "123";
    char str4[] = "abcdefghi";

	printf("str3 originally: %s\n", str3);
    //ft_putchar('\n');
	//ft_putstr(str3);
    //ft_putchar('\n');
	printf("str4 originally: %s\n", str4);
    //ft_putstr(str4);
    //ft_putchar('\n');
    ft_strncpy(str3, str4, 6);
    //ft_putchar('\n');
	printf("str3 after ft_strncpy: %s\n", str3);
    //ft_putstr(str3);
    //ft_putchar('\n');
	printf("str4 after ft_strncpy: %s\n", str4);
    //ft_putstr(str4);
    //ft_putchar('\n');
}
