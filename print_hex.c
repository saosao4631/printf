/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaotome <ksaotome@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:10:21 by ksaotome          #+#    #+#             */
/*   Updated: 2026/05/10 21:11:03 by ksaotome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, const char *base)
{
	char	buf[8];
	char	*pos;

	pos = &buf[8];
	if (n == 0)
		*(--pos) = '0';
	while (n)
	{
		*(--pos) = base[n % 16];
		n /= 16;
	}
	return (putchar_byte(pos, &buf[8] - pos));
}
