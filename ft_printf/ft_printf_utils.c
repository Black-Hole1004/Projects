/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:57 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/08 15:31:46 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_len(size_t nbr)
{
	int	i;

	i = 0;
	while (nbr)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}

void	ft_putnbr_fd_unsigned(unsigned int nb, int fd, int *len)
{
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd, len);
		ft_putnbr_fd(nb % 10, fd, len);
	}
	if (nb < 10 && nb >= 0)
		ft_putchar_fd(nb + 48, fd, len);
}

int	ft_putnbr_base(size_t nb, int *len, int X, int to_do)
{
	char	*str;

	str = BASE_16_LOWER;
	if (X == 'p' && !to_do)
	{
		ft_putstr_fd("0x", 1, len);
		to_do = 1;
	}
	else if (X != 'p')
		nb = (unsigned int)nb;
	if (nb < 16)
	{
		write(1, &str[nb], 1);
		(*len)++;
	}
	else
	{
		ft_putnbr_base(nb / 16, len, X, to_do);
		ft_putnbr_base(nb % 16, len, X, to_do);
	}
	return (*len);
}

int	ft_putnbr_ubase(unsigned int nb, int *len)
{
	char	*str1;

	str1 = BASE_16_UPPER;
	if (nb < 16)
	{
		write(1, &str1[nb], 1);
		(*len)++;
	}
	else
	{
		ft_putnbr_ubase(nb / 16, len);
		ft_putnbr_ubase(nb % 16, len);
	}
	return (*len);
}

void	print_normal(char str, va_list argptr, int *len)
{
	if (str == 'd' || str == 'i')
		ft_putnbr_fd(va_arg(argptr, int), 1, len);
	else if (str == 'c')
		ft_putchar_fd(va_arg(argptr, int), 1, len);
	else if (str == 's')
		ft_putstr_fd(va_arg(argptr, char *), 1, len);
	else if (str == 'p')
		ft_putnbr_base(va_arg(argptr, size_t), len, str, 0);
	else if (str == 'x')
		ft_putnbr_base(va_arg(argptr, size_t), len, str, 0);
	else if (str == 'X')
		ft_putnbr_ubase(va_arg(argptr, unsigned int), len);
	else if (str == '%')
		ft_putchar_fd('%', 1, len);
	else if (str == 'u')
		ft_putnbr_fd_unsigned(va_arg(argptr, unsigned int), 1, len);
	else
		ft_putchar_fd(str, 1, len);
}

// void	print_handle_space()
// void	print_handle_plus()