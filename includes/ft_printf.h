/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:47:42 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/11 19:52:23 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define __CONVERTER "cspdiuxX%"

int		ft_printf(const char *, ...);
void	parser(const char *s, va_list ap, size_t *nprint);
void	writer(char c, size_t *nprint);

#endif
