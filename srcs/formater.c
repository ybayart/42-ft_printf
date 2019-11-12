/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formater.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 05:03:29 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/12 23:23:58 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	d(t_printf data, va_list ap)
{
	t_decimal	decimal;

//	printf("\n--------------------\n-> neg: %d\n-> len: %d\n-> pre: %d\n-> typ: %c\n--------------------\n", data.neg, data.len, data.pre, data.type);
	if (data.len == 0)
		if ((data.len = va_arg(ap, int)) < 0)
		{
			data.neg = -1;
			data.len *= -1;
		}
	if (data.pre == 0)
		data.pre = va_arg(ap, int);
	decimal.n = va_arg(ap, int);
	if (data.pre == -2 && decimal.n == 0)
		return ;
	if (data.len < (int)(decimal.len = ft_nbrlen(decimal.n)))
		data.len = decimal.len;
	if (data.pre < (int)decimal.len)
		data.pre = decimal.len;
	decimal.decalage = 0;
	if (data.neg == -1)
	{
		if (decimal.n < 0)
		{
			decimal.n *= -1;
			writer('-');
			decimal.decalage -= 1;
		}
		write_char('0', data.pre - decimal.len);
		ft_putnbr_fd(decimal.n, 1);
		write_char(' ', data.len - data.pre);
	}
	else if (data.neg >= 0)
	{
	
		if (data.neg == 0 && (data.pre == -1 || data.pre == (int)decimal.len))
		{
			if (decimal.n < 0)
			{
				decimal.n *= -1;
				writer('-');
				decimal.decalage -= 1;
			}
			write_char('0', data.len - data.pre);
		}
		else
			write_char(' ', data.len - data.pre);
		if (decimal.n < 0)
		{
			decimal.n *= -1;
			writer('-');
			if (data.pre - decimal.len > 0)
				decimal.len -= 1;
			else
				decimal.decalage -= 1;
		}
		write_char('0', data.pre - decimal.len);
		ft_putnbr_fd(decimal.n, 1);
	}
	printed(decimal.len + decimal.decalage);
}

void	formater(t_printf data, va_list ap)
{
	if (data.type == 'd' || data.type == 'i')
		d(data, ap);
//	printf("\n--------------------\n-> neg: %d\n-> len: %d\n-> pre: %d\n-> typ: %c\n--------------------\n", data.neg, data.len, data.pre, data.type);
}
