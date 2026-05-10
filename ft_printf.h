/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaotome <ksaotome@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 16:11:20 by ksaotome          #+#    #+#             */
/*   Updated: 2026/05/10 21:12:09 by ksaotome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	print_char(char c);
int	print_str(char *s);
int	print_ptr(void *p);
int	print_uint(unsigned int n);
int	print_nbr(int n);
int	print_hex(unsigned int n, const char *base);
int	putchar_byte(const char *s, int b);
int	ft_printf(const char *format, ...);

#endif