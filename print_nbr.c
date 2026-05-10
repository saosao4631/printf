/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaotome <ksaotome@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:02:14 by ksaotome          #+#    #+#             */
/*   Updated: 2026/05/10 21:06:49 by ksaotome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	unsigned int	num;
	char			buf[11];
	char			*pos;

	if (n < 0)
		n *= -1;
	num = (unsigned int)n;
	pos = &buf[11];
	if (num == 0)
		*(--pos) = '0';
	while (num)
	{
		*(--pos) = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		*(--pos) = '-';
	return (putchar_byte(pos, &buf[11] - pos));
}
