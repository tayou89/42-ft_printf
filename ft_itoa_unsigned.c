/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:08:45 by tayou             #+#    #+#             */
/*   Updated: 2023/01/08 21:25:36 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_size(unsigned int number)
{
	int	i;

	if (number == 0)
		return (1);
	i = 0;
	while (number != 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char	*fill_array(char *string, unsigned int number, int digit)
{
	int	i;

	if (number == 0)
		string[0] = '0';
	i = digit;
	while (number != 0)
	{
		string[i - 1] = number % 10 + '0';
		number /= 10;
		i--;
	}
	string[digit] = '\0';
	return (string);
}

char	*ft_itoa_unsigned(unsigned int number)
{
	char		*string;
	int			digit;

	digit = get_size(number);
	string = (char *) malloc(sizeof(char) * digit + 1);
	if (string == 0)
		return (0);
	string = fill_array(string, number, digit);
	return (string);
}
