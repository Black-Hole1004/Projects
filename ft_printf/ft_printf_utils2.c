/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:58:15 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/08 18:59:15 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd, int *len)
{
	write (fd, &c, 1);
	(*len)++;
}

void	ft_putnbr_fd(int nb, int fd, int *len)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(fd, "-2147483648", 11);
			(*len) += 11;
		}
		else
			ft_putchar_fd('-', fd, len);
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd, len);
		ft_putnbr_fd(nb % 10, fd, len);
	}
	if (nb < 10 && nb >= 0)
		ft_putchar_fd(nb + 48, fd, len);
}

void	ft_putstr_fd(char *s, int fd, int *len)
{
	if (!s)
	{
		write (1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (*s)
	{
		ft_putchar_fd(*s, fd, len);
		s++;
	}
}
