/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yudemir <yudemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:46:23 by yudemir           #+#    #+#             */
/*   Updated: 2024/11/22 18:46:23 by yudemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	typecontrol(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(args, int));
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	if (format == 'p')
		len += ft_putpointer(va_arg(args, void *));
	if (format == 'x' || format == 'X')
		len += ft_puthexnbr(va_arg(args, unsigned int), format);
	if (format == 'u')
		len += ft_putunsigned(va_arg(args, unsigned int));
	if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *frmt, ...)
{
	int		len;
	va_list	args;
	int		i;

	i = 0;
	len = 0;
	va_start(args, frmt);
	while (frmt[i])
	{
		if (frmt[i] == '%')
		{
			len += typecontrol(args, frmt[i + 1]);
			i++;
		}
		else
			len += ft_putchar(frmt[i]);
		i++;
	}
	va_end(args);
	return (len);
}
