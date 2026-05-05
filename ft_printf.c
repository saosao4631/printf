/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaotome <ksaotome@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 16:15:12 by ksaotome          #+#    #+#             */
/*   Updated: 2026/05/03 20:24:18 by ksaotome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	args;

	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 'c')
				printf("%c", va_arg(args, int));
			else if (*fmt == 's')
				printf("%s", va_arg(args, char *));
			else if (*fmt == 'd')
				printf("%d", va_arg(args, int));
		}
		else
		{
			write(1, *fmt, 1);
		}
		fmt++;
	}
	va_end(args);
	return (0);
}

int	main(int argc, char **argv)
{
	ft_printf(argv[1]);
	return (0);
}