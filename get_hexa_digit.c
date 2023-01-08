/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hexa_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:10:33 by tayou             #+#    #+#             */
/*   Updated: 2023/01/08 18:25:37 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_hexa_digit(unsigned int number)
{
	int	digit;

	digit = 0;
	if (number == 0)
		digit = 1;
	while (number != 0)
	{
		number /= 16;
		digit++;
	}
	return (digit);
}
