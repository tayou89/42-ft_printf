/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_others.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:01:43 by tayou             #+#    #+#             */
/*   Updated: 2023/01/08 19:04:29 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_if_others(char c, va_list ap, int print_count)
{
	char			*str;
	unsigned int	number;
	int				digit;

	if (c == 'u')
	{
		str = ft_itoa_unsigned(va_arg(ap, unsigned int));
		print_count = (int) write(1, str, ft_strlen(str));
	}
	else if (c == 'x' || c == 'X')
	{
		number = va_arg(ap, unsigned int);
		digit = get_hexa_digit(number);
		str = (char *) malloc(sizeof(char) * digit + 1);
		if (str == 0)
			return (0);
		str = fill_str_hexa(str, number, digit, c);
		str[digit] = '\0';
		print_count = (int) write(1, str, ft_strlen(str));
		free(str);
	}
	else if (c == '%')
		print_count = (int) write(1, "%", 1);
	return (print_count);
}
