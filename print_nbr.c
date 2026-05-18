/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaotome <ksaotome@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:02:14 by ksaotome          #+#    #+#             */
/*   Updated: 2026/05/18 19:58:54 by ksaotome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	unsigned int	num;
	char			buf[11];
	char			*pos;
	int				flag;

	flag = 1;
	if (n < 0)
	{
		num = (unsigned int)(-(n + 1)) + 1;
		flag *= -1;
	}
	else
		num = (unsigned int)n;
	pos = &buf[11];
	if (num == 0)
		*(--pos) = '0';
	while (num)
	{
		*(--pos) = num % 10 + '0';
		num /= 10;
	}
	if (flag < 0)
		*(--pos) = '-';
	return (putchar_byte(pos, &buf[11] - pos));
}
