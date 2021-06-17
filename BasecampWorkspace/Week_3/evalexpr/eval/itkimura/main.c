/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 06:24:27 by itkimura          #+#    #+#             */
/*   Updated: 2021/06/13 20:42:08 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int			ft_eval_strlen(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != ' ' || (str[i] <= '\t' && str[i] >= '\r'))
			count++;
		i++;
	}
	return (count + 2);
}

char		*ft_remove_whitespace(char *av)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 1;
	p = malloc(sizeof(p) * ft_eval_strlen(av));
	p[0] = '(';
	while (av[i])
	{
		if (av[i] != ' ' || (av[i] <= '\t' && av[i] >= '\r'))
		{
			p[j] = av[i];
			j++;
		}
		i++;
	}
	p[j++] = ')';
	p[j] = '\0';
	return (p);
}

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int			eval_expr(char **argv)
{
	char *exp;

	exp = 0;
	exp = ft_remove_whitespace(argv[1]);
	write(1, "\n", 1);
	ft_putstr(exp);
	return (1);
}

int			main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(&av[1]));
		ft_putchar('\n');
	}
	return (0);
}
