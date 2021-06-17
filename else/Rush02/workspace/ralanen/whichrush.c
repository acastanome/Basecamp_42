/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whichrush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:14:10 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/13 06:14:04 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//check if the first char is o
if (str[0] == 'o')
{
	print [rush-00] [x] [y];
}
//check if the first char is /
else if (str[0] == '/')
{
	print [rush-01] [x] [y];
}
//check if the first char is A and the parameters are only 1, 1
else if (str[0] == 'A' && x == 1 && y == 1)
{
	print [rush-02] [x] [y];
	print [rush-03] [x] [y];
	print [rush-04] [x] [y];
}
//check if the last char on the first row is A, h needs to be more than 1!!
else if (str[x] == 'A')
{
	print [rush-02] [x] [y];
}
//check if the last char on the first row is C and there is only one row
else if (str[x] == 'C' && y == 1)
{
	print [rush-03] [x] [y];
	print [rush-04] [x] [y];
}
//check if the last char in the whole string is C when there is more than 1 row
else if (str[x * y] == 'C')
{
	print [rush-03] [x] [y];
}
//rush 4 is basically what's left if nothing else fits
else
	print [rush-04] [x] [y];

