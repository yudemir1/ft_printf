/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yudemir <yudemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:46:16 by yudemir           #+#    #+#             */
/*   Updated: 2024/11/22 18:46:16 by yudemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer2(unsigned long long pt)
{
	int		len;
	char	*hex;

	len = 0;
	hex = "0123456789abcdef";
	if (pt >= 16)
	{
		len += ft_putpointer2(pt / 16);
		len += ft_putpointer2(pt % 16);
	}
	else
		len += ft_putchar(hex[pt]);
	return (len);
}

int	ft_putpointer(void *ptr)
{
	int					len;
	unsigned long long	p;

	p = (unsigned long long)ptr;
	len = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_putpointer2(p);
	return (len);
}
