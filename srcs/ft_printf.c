/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:46:42 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/11 20:31:34 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *s, ...)
{
	va_list	ap;
	size_t	nprint;

	nprint = 0;
	va_start(ap, s);
	parser(s, ap, &nprint);
/*	printf("\n%lu\n\n", i);
	while (i-- > 0)
	{
		printf("%s\n", va_arg(ap, void*));
*/
	va_end(ap);
	return (nprint);
}
