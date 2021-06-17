/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkinnune <jkinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:19:30 by jkinnune          #+#    #+#             */
/*   Updated: 2021/06/06 16:30:08 by jkinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lettercheck(char *str);

int	ft_errors(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc != 10)
	{
		return (0);
	}
	while (i < 10)
	{
		if (!lettercheck(argv[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	lettercheck(char *str)
{
	while (*str)
	{
		if (!((*str >= '1' && *str <= '9') || (*str == '.')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
