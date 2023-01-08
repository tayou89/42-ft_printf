/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:02:39 by tayou             #+#    #+#             */
/*   Updated: 2023/01/08 19:02:03 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_address_hexa(void *address, int *print_count)
{
	char		*hexa;
	char		hexa_char;
	long long	copy_address;

	hexa = "01234567890abcdef";
	copy_address = (long long) address;
	hexa_char = hexa[copy_address % 16];
	copy_address /= 16;
	(*print_count)++;
	if (copy_address != 0)
		print_address_hexa((void *) copy_address, print_count);
	write(1, &hexa_char, 1);
}
