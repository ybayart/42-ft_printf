/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:46:42 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/21 22:54:24 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *s, ...)
{
	va_list	ap;
	int		n;

	va_start(ap, s);
	parser(s, ap);
	va_end(ap);
	n = printed(0);
	return (n);
}
