/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:05:13 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/13 12:50:04 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	char *str;
	int x_c;
	int y_c;
	int i;

	str = (char*)malloc(sizeof(char) * (x * y));
	x_c = 0;
	y_c = 0;
	while (y_c < y)
	{
		while (x_c < x)
		{
			if ((x_c == 0 && y_c == 0)
			|| (x_c == (x - 1) && y_c == (y - 1) && x_c > 1 && y_c > 1))
			{
				str[i] = ('A');
				i++;
			}
			else if ((x_c == (x - 1) && y_c == 0)
			|| (x_c == 0 && y_c == (y - 1)))
			{
				str[i] = ('C');
				i++;
			}
			else if ((x_c > 0 && x_c < (x - 1)) && (y_c > 0 && y_c < (y - 1)))
			{
				str[i] = (' ');
				i++;
			}
			else
			{
				str[i] = ('B');
				i++;
			}
			x_c++;
		}
		str[i] = ('\n');
		i++;
		y_c++;
		x_c = 0;
	}
	str[i + 1] = '\0';
	return (str);
}
