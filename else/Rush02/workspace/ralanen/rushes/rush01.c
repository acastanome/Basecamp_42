/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 07:03:56 by jervasti          #+#    #+#             */
/*   Updated: 2021/06/13 12:45:26 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	char *str;
	int xc;
	int yc;
	int i;

	str = (char*)malloc(sizeof(char) * (x * y));
	xc = 0;
	yc = 0;
	while (yc < y)
	{
		while (xc < x)
		{
			if ((xc == 0 && yc == 0) ||
			(xc > 1 && yc > 1 && (xc == (x - 1) && yc == (y - 1))))
			{
				str[i] = ('/');
				i++;
			}
			else if ((xc == (x - 1) && yc == 0) || (xc == 0 && yc == (y - 1)))
			{
				str[i] = ('\\');
				i++;
			}
			else if ((xc > 0 && xc < (x - 1))
			&& (yc > 0 && yc < (y - 1)))
			{
				str[i] = (' ');
				i++;
			}
			else
			{
				str[i] = ('*');
				i++;
			}
			xc++;
		}
		str[i] = ('\n');
		i++;
		yc++;
		xc = 0;
	}
	str[i + 1] = '\0';
	return (str);
}
