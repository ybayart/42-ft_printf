/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tp.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 05:07:08 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/12 23:14:49 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_TP_H
# define FT_PRINTF_TP_H

typedef struct	s_printf
{
	int		neg;
	int		len;
	int		pre;
	char	type;
}				t_printf;

typedef struct	s_decimal
{
	int		n;
	int		neg;
	int		decalage;
	size_t	len;
}				t_decimal;

#endif
