/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:47:42 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/12 06:31:30 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# include "ft_printf_tp.h"
# include "libft.h"

# define __CONVERTER "cspdiuxX%"

int		ft_printf(const char *s, ...);
void	parser(const char *s, va_list ap);
void	writer(char c);
void	write_char(char c, int n);
size_t	printed(int inc);
void	formater(t_printf data, va_list ap);

#endif
