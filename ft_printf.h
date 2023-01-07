/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:43:52 by tayou             #+#    #+#             */
/*   Updated: 2023/01/07 22:47:38 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINT_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

int	ft_printf(const char *str, ...);

#endif
