/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpymine.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:45:58 by acastano          #+#    #+#             */
/*   Updated: 2021/06/01 21:21:47 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{//copies at most n bytes of src to dest including term '\0' if there is
	unsigned int i;

	i = 0;
	while ((n > 0) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '0';
		n--;
		i++;
	}
	return (dest);
}
