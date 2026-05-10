/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaotome <ksaotome@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:08:25 by ksaotome          #+#    #+#             */
/*   Updated: 2026/05/10 21:10:04 by ksaotome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_uint(unsigned int n)
{
	char	buf[10];
	char	*pos;

	pos = &buf[10];
	if (n == 0)
		*(--pos) = '0';
	while (n)
	{
		*(--pos) = n % 10 + '0';
		n /= 10;
	}
	return (putchar_byte(pos, &buf[10] - pos));
}
