/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 19:32:42 by swilliam          #+#    #+#             */
/*   Updated: 2021/05/30 18:16:32 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int fibonacci;
	
	fibonacci = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
	{
		return (0);
	}
	else
	{
		fibonacci = ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
	}
	return (0);
}

/*	int fibonacci;

	if (index < 0)
		return (-1);
	fibonacci = ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
	return (fibonacci);
}

{*/