/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:13:14 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/11 20:31:36 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		is_converter(char c)
{
	char	*charset;

	charset = __CONVERTER;
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int		opts(const char *s)
{
	int		i;
	int		neg;
	int		pre;

	i = 1;
	neg = 1;
	pre = 0;
	while (*(s + i++) == '-')
		neg = -1;
	while (isdigit(*(s + i))
		pre = (pre * 10) + (*(s + i++) - '0');
	
}

void	parser(const char *s, va_list ap, size_t *nprint)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	(void)ap;
	while (*(s + i))
	{
		if (*(s + i) == '%')
		{
			i += opts(*(s + i));
		}
		else
		{
			writer(*(s + i), nprint);
		}
		i++;
	}
}
