/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespacestesting.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 22:18:36 by acastano          #+#    #+#             */
/*   Updated: 2021/06/04 20:32:49 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_numwords(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' ||
		str[i] == '\n' || str[i] == '\v')
			i++;
		while (str[i] != ' ' || str[i] != '\t' ||
		str[i] != '\n' || str[i] != '\v' || str[i] != '\0')
			i++;
		words++;
	}
	return (words);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		words;
	int		b;
	char	let;
	char	**wordarray;

	i = 0;
	b = 0;
	let = 'a';
	words = ft_numwords(str);
	wordarray = (char **)malloc(sizeof(words + 1));
	if (wordarray == '\0')
		return (0);
	while (b <= words)
	{
		while (str[i] == ' ' || str[i] == '\t' ||
		str[i] == '\n' || str[i] == '\v')
			i++;
		wordarray[b] = &str[i];
		while (str[i] != ' ' || str[i] != '\t' ||
		str[i] != '\n' || str[i] != '\v' || str[i] != '\0')
			i++;
		b++;
	}
	return (wordarray);
}

int main(void)
{
	char *str1;
	char **wordarray;

	str1 = "What is going on with pointers";
	wordarray = ft_split_whitespaces(str1);
	free(wordarray);
	return (0);
}
