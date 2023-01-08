/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_str_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:09:54 by tayou             #+#    #+#             */
/*   Updated: 2023/01/08 18:24:42 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*fill_str_hexa(char	*str, unsigned int number, int digit, char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (number == 0)
		str[0] = '0';
	else
	{
		digit--;
		while (number != 0)
		{
			str[digit] = hexa[number % 16];
			if (c == 'X')
				str[digit] = ft_toupper(str[digit]);
			number /= 16;
			digit--;
		}
	}
	return (str);
}
