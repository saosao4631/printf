/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaotome <ksaotome@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 16:15:12 by ksaotome          #+#    #+#             */
/*   Updated: 2026/05/10 20:49:07 by ksaotome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_conversion_specifier(va_list *args, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = print_char(va_arg(*args, int));
	else if (c == 's')
		len = print_str(va_arg(*args, char *));
	else if (c == 'p')
		len = print_ptr(va_arg(*args, void *));
	else if (c == 'd' || c == 'i')
		len = print_nbr(va_arg(*args, int));
	else if (c == 'u')
		len = print_uint(va_arg(*args, unsigned int));
	else if (c == 'x')
		len = print_hex(va_arg(*args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len = print_hex(va_arg(*args, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		len = print_char('%');
	else if (c == '\0')
		len = -1;
	else
		len = print_char(c);
	return (len);
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
