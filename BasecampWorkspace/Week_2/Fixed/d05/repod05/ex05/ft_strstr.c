/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:54:42 by acastano          #+#    #+#             */
/*   Updated: 2021/06/02 11:52:39 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
