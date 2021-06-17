/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorttest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 06:56:52 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/06/09 17:36:06 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    long copy;

    copy = nb;
    if ((-2147483648 > nb) || (nb > 2147483647))
        return ;
    if (copy < 0)
    {
        ft_putchar('-');
        copy *= -1;
    }
    if (copy > 9)
        ft_putnbr(copy / 10);
    ft_putchar('0' + (copy % 10));
}

int    ft_is_sort(int *tab, int length, int (*f)(int, int))
{
    int    i;

    i = 0;
    while (i < length - 1)
    {
        if (f(tab[i], tab[i + 1]) > 0)
            return (0);
        i++;
    }
    return (1);
}



int compare_num(int a, int b)
{
    if (a < b)
        return (-1);
    else if (a == b)
        return (0);
    else
        return (1);
}

int main(void)
{
    int array[] = {1, 77, 8, 15, 17};
    int length = 5;
    int result;


    int (*function) (int, int);
    function = &compare_num;

    result = ft_is_sort(array, length, function);
    ft_putnbr(result);
    ft_putchar('\n');

    return (0);
}