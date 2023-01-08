/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:43:52 by tayou             #+#    #+#             */
/*   Updated: 2023/01/08 19:13:13 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);

int		check_if_cspdi(char c, va_list ap, int print_count);
void	print_address_hexa(void *address, int *print_count);

int		check_if_others(char c, va_list ap, int print_count);
char	*ft_itoa_unsigned(unsigned int number);
int		get_hexa_digit(unsigned int number);
char	*fill_str_hexa(char *str, unsigned int number, int digit, char c);

#endif
