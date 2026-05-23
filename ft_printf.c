/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaotome <ksaotome@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 16:15:12 by ksaotome          #+#    #+#             */
/*   Updated: 2026/05/23 19:29:33 by ksaotome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_conversion_specifier(va_list *args, const char c)
{
	if (c == 'c')
		return (print_char(va_arg(*args, int)));
	if (c == 's')
		return (print_str(va_arg(*args, char *)));
	if (c == 'p')
		return (print_ptr(va_arg(*args, void *)));
	if (c == 'd' || c == 'i')
		return (print_nbr(va_arg(*args, int)));
	if (c == 'u')
		return (print_uint(va_arg(*args, unsigned int)));
	if (c == 'x')
		return (print_hex(va_arg(*args, unsigned int), "0123456789abcdef"));
	if (c == 'X')
		return (print_hex(va_arg(*args, unsigned int), "0123456789ABCDEF"));
	if (c == '%')
		return (print_char('%'));
	if (c == '\0')
		return (-1);
	return (print_char(c));
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		cnt;
	int		len;

	cnt = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			len = print_conversion_specifier(&args, *fmt);
			if (len == -1)
				return (-1);
			cnt += len;
		}
		else
		{
			print_char(*fmt);
			cnt++;
		}
		fmt++;
	}
	va_end(args);
	return (cnt);
}
