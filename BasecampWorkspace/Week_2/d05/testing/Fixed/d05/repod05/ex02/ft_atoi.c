/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:27:37 by acastano          #+#    #+#             */
/*   Updated: 2021/05/31 21:25:30 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int answer;
	int sign;

	sign = 1;
	i = 0;
	answer = 0;
	while ((str[i] == ' ') || (str[i] == 9) || (str[i] == '\n'))
		i++;
	if ((str[i] == '+') && (str[i + 1]) != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((str[i] > 47) && (str[i] < 58))
	{
		answer = answer * 10 + (str[i]) - 48;
		i++;
	}
	return (sign * answer);
}
