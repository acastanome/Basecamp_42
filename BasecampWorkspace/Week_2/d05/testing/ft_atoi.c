/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:27:37 by acastano          #+#    #+#             */
/*   Updated: 2021/06/17 13:24:23 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int minus;
	int i;
	int result;

	i = 0;
	minus = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		minus = -1 * (str[i] - '-' + 1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * minus);
}

int		main(void)
{
	char *str1 = "00";
	int i1 = ft_atoi(str1);
	char *str2 = "\t-+3";
	int i2 = ft_atoi(str2);
	char *str3 = "01";
	int i3 = ft_atoi(str3);
	char *str4 = "10";
	int i4 = ft_atoi(str4);
	char *str5 = "";
	int i5 = ft_atoi(str5);
	char *str6 = "-9";
	int i6 = ft_atoi(str6);
	char *str7 = "546";
	int i7 = ft_atoi(str7);
	char *str8 = "-546";
	int i8 = ft_atoi(str8);
	char *str9 = "5 46";
	int i9 = ft_atoi(str9);//space
	char *str10 = "54	6";
	int i10 = ft_atoi(str10);//tab
	char *str11 = "++546";
	int i11 = ft_atoi(str11);
	char *str12 = "5w46";
	int i12 = ft_atoi(str12);
	char *str13 = "w46w";
	int i13 = ft_atoi(str13);

	printf("for string %s atoi gives: %d\n", str1, i1);
	printf("for string %s atoi gives: %d\n", str2, i2);
	printf("for string %s atoi gives: %d\n", str3, i3);
	printf("for string %s atoi gives: %d\n", str4, i4);
	printf("for string %s atoi gives: %d\n", str5, i5);
	printf("for string %s atoi gives: %d\n", str6, i6);
	printf("for string %s atoi gives: %d\n", str7, i7);
	printf("for string %s atoi gives: %d\n", str8, i8);
	printf("for string %s atoi gives: %d\n", str9, i9);
	printf("for string %s atoi gives: %d\n", str10, i10);
	printf("for string %s atoi gives: %d\n", str11, i11);
	printf("for string %s atoi gives: %d\n", str12, i12);
	printf("for string %s atoi gives: %d\n", str13, i13);
	return (0);
}
