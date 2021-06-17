/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:47:49 by acastano          #+#    #+#             */
/*   Updated: 2021/06/02 15:15:40 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	//function
}


int		main(void)
{
	char s1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n";

	printf("test1 should return \"Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\", returns: \"%s\"\n", ft_strcapitalize(s1));

	return (0);
}
