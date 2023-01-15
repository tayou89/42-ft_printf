/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:53:01 by tayou             #+#    #+#             */
/*   Updated: 2023/01/15 19:51:42 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	*name;
	int		age;
	int		return_ft_printf;
	int		return_printf;

	name = "유태갑";
	age = 35;
	return_ft_printf = ft_printf("내 이름은 %s이고 나이는 %d입니다.\n", name, age);
	return_printf = printf("내 이름은 %s이고 나이는 %d입니다.\n", name, age);
	printf("return_ft_printf: %d\n", return_ft_printf);
	printf("return_printf: %d\n", return_printf);
	return (0);
}
