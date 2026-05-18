/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaotome <ksaotome@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 20:02:55 by ksaotome          #+#    #+#             */
/*   Updated: 2026/05/18 19:49:11 by ksaotome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(void *p)
{
	char			buf[18];
	char			*s;
	unsigned long	address;

	if (!p)
		return (putchar_byte("(nil)", 5));
	address = (unsigned long)p;
	s = &buf[18];
	while (address)
	{
		s--;
		*s = "0123456789abcdef"[address % 16];
		address /= 16;
	}
	s--;
	*s = 'x';
	s--;
	*s = '0';
	return (putchar_byte(s, &buf[18] - s));
}
