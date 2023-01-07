/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:42:39 by tayou             #+#    #+#             */
/*   Updated: 2023/01/08 01:16:02 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	print_address_hexa(void *address)
{
	char		*hexa;
	char		hexa_char;
	long long	copy_address;
	
	hexa = "01234567890abcdef";
	copy_address = (long long) address;
	
	hexa_char = hexa[copy_address % 16];
	copy_address /= 16;
	if (copy_address != 0)
		print_address_hexa((void *) copy_address);
	write(1, hexa_char, 1);
}

void	check_next(char c, va_list ap, int print_count)
{
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(ap, char), 1);
		print_count
	else if (c == 's')
	{
		str
		ft_putstr_fd(va_arg(ap, char *), 1);
	else if (c == 'p')
	{
		write(1, "0x", 2);
		print_address_hexa(va_arg(ap, void *));




int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		print_count;

	print_count = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			print_count++;
		}
		else if (str[i] == '%')
			check_next(str[i + 1], ap, print_count);
	}

	return (print_count);










