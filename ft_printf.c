/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:42:39 by tayou             #+#    #+#             */
/*   Updated: 2023/01/15 19:59:28 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		print_count;
	int		i;

	print_count = 0;
	va_start(ap, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			print_count++;
		}
		else if (str[i] == '%')
		{
			print_count = print_type_cspdi(str[i + 1], ap, print_count);
			print_count = print_type_others(str[i + 1], ap, print_count);
			i++;
		}
		i++;
	}
	return (print_count);
}
