/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matchtest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:00:35 by acastano          #+#    #+#             */
/*   Updated: 2021/06/06 17:50:52 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		num_stars(char *s)
{
	int num;
	int i;

	num = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '*')
			num++;
		i++;
	}
	return (num);
}

int		ft_normalstrcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int		match(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1)
	{
		
	}
	
	return (0);
}*/

//match if identical. if s2 *, replace with any char str so match. s2 as many stars as needed
//main.c and *.c match
//return 1 if match, 0 if not


/* matches:
**main.c and *.c
**
*/

int		main(void)
{
	char *s1 = "main.c";
	char *s2 = "*.c";
	//char *s3 = "abcbd";
	char *s4 = "*b*";
	
	printf("%d\n", num_stars(s1));
	printf("%d\n", num_stars(s2));
	printf("%d\n", num_stars(s4));
	printf("%d\n", ft_normalstrcmp(s1, s2));
}