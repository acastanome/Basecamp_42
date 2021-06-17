/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maptesting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:26:49 by acastano          #+#    #+#             */
/*   Updated: 2021/06/09 17:20:11 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if ((-2147483648 > nb) || (nb > 2147483647))
		return ;
	if (0 > nbr)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar('0' + (nbr % 10));
	return ;
}

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int *array;
	int i;

	array = (int*)malloc(sizeof(*tab) * length);
	if (!array)
		return (NULL);
	i = 0;
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

int		ft_increase(int i)
{
	return (i + 1);
}

int		main(void)
{
	int		arr[6];
	int		*result;
	int		i;

	i = 0;
	arr[0] = 2;
	arr[1] = 4;
	arr[2] = 42;
	arr[3] = 7;
	arr[4] = 3;
	arr[5] = 5;
	result = ft_map(arr, 6, &ft_increase);
	while (i < 6)
	{
		ft_putnbr(arr[i]);
		ft_putchar('\t');
		ft_putnbr(result[i]);
		ft_putchar('\n');
		i++;
	}
	free(result);
	return (0);
}
