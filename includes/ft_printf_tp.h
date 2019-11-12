/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tp.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 05:07:08 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/12 06:21:53 by ybayart          ###   ########.fr       */
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

#endif
