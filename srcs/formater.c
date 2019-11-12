/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formater.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 05:03:29 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/12 07:02:00 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	d(t_printf data, va_list ap)
{
	int		n;
	size_t	len;

	if (data.len == 0)
		data.len = va_arg(ap, int);
	if (data.pre == 0)
		data.pre = va_arg(ap, int);
	n = va_arg(ap, int);
	if (data.len < (int)(len = ft_nbrlen(n)))
		data.len = len;
	if (data.pre < (int)len)
		data.pre = len;
	if (data.neg == -1)
	{
		write_char('0', data.pre - len);
		ft_putnbr_fd(n, 1);
		write_char(' ', data.len - data.pre);
	}
	else if (data.neg >= 0)
	{
		if (data.neg == 0)
			write_char('0', data.len - data.pre);
		else
			write_char(' ', data.len - data.pre);
		write_char('0', data.pre - len);
		ft_putnbr_fd(n, 1);
	}
	printed(len);
}

void	formater(t_printf data, va_list ap)
{
	if (data.type == 'd')
		d(data, ap);
//	printf("\n--------------------\n-> neg: %d\n-> len: %d\n-> pre: %d\n-> typ: %c\n--------------------\n", data.neg, data.len, data.pre, data.type);
}
