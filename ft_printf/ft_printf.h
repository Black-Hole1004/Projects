/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:18:35 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/08 15:32:29 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BASE_16_LOWER  "0123456789abcdef"
# define BASE_16_UPPER  "0123456789ABCDEF"
# define BASE_10		"0123456789"
# define BASE_2         "01"

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_get_len(size_t nbr);
int		ft_printf(const char *str, ...);
void	print_normal(char str, va_list argptr, int *len);
int		ft_putnbr_ubase(unsigned int nb, int *len);
int		ft_putnbr_base(size_t nb, int *len, int X, int to_do);
void	ft_putchar_fd(char c, int fd, int *len);
void	ft_putnbr_fd(int nb, int fd, int *len);
void	ft_putstr_fd(char *s, int fd, int *len);
void	ft_putnbr_fd_unsigned(unsigned int nb, int fd, int *len);

#endif