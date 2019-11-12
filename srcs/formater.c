/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formater.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 05:03:29 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/12 05:59:03 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	d(t_printf data, va_list ap)
{
	int		n;
	size_t	len;

	n = va_arg(ap, int);
	len = ft_nbrlen(n);
	if (data.neg == 1)
		while (data.len-- - len > 0)
			writer(' ');
	ft_putnbr_fd(n, 1);
	printed(len);

}

void	formater(t_printf data, va_list ap)
{
	if (data.type == 'd')
		d(data, ap);
//	printf("\n--------------------\n-> neg: %d\n-> len: %d\n-> pre: %d\n-> typ: %c\n--------------------\n", data.neg, data.len, data.pre, data.type);
}
