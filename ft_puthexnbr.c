/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yudemir <yudemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:46:12 by yudemir           #+#    #+#             */
/*   Updated: 2024/11/22 18:46:12 by yudemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexnbr(unsigned int n, char type)
{
	int		len;
	char	*hex;
	char	*hexu;

	len = 0;
	hex = "0123456789abcdef";
	hexu = "0123456789ABCDEF";
	if (n >= 16)
	{
		len += ft_puthexnbr(n / 16, type);
		len += ft_puthexnbr(n % 16, type);
	}
	else if (type == 'x')
		len += ft_putchar(hex[n]);
	else if (type == 'X')
		len += ft_putchar(hexu[n]);
	return (len);
}
