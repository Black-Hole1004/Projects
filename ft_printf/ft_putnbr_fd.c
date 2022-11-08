/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:03:25 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/08 15:37:26 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
