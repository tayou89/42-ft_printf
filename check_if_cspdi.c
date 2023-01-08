/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_cspdi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:01:30 by tayou             #+#    #+#             */
/*   Updated: 2023/01/08 22:07:29 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_if_cspdi(char c, va_list ap, int print_count)
{
	char	*str;

	if (c == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		print_count++;
	}
	else if (c == 's')
	{
		str = va_arg(ap, char *);
		print_count = (int) write(1, str, ft_strlen(str));
	}
	else if (c == 'p')
	{
		write(1, "0x", 2);
		print_count += 2;
		print_address_hexa(va_arg(ap, void *), &print_count);
	}
	else if (c == 'd' || c == 'i')
	{
		str = ft_itoa(va_arg(ap, int));
		print_count = (int) write(1, str, ft_strlen(str));
	}
	return (print_count);
}
