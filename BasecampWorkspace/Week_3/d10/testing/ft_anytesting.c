/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_anytesting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:21:49 by acastano          #+#    #+#             */
/*   Updated: 2021/06/09 07:24:45 by acastano         ###   ########.fr       */
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

int		ft_decrease(char *c)
{
	return (c - c);
}

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(*(tab[i])) == 1)
			return (1);
	}
	return (0);
}

int		main(void)
{
	char	*arr[6];
	int		*result;
	int		i;

	i = 0;
	arr[0] = b;
	arr[1] = '\0';
	/*arr[2] = 42;
	arr[3] = 7;
	arr[4] = 3;
	arr[5] = 5;*/
	result = ft_any(arr, &ft_increase);
	while (i < 6)
	{
		printf("%d")
		i++;
	}
	return (0);
}
