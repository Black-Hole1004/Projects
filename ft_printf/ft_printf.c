/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:18:19 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/08 18:32:27 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		len;

	len = 0;
	va_start(argptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (!(*str))
				break ;
			print_normal(*str, argptr, &len);
		}
		else
			ft_putchar_fd(*str, 1, &len);
		str++;
	}
	va_end(argptr);
	return (len);
}

// int	main(void)
// {
// 	int		x;
// 	char	d;

// 	x = 584525;
// 	d = 'c';
// 	ft_printf("%d \n", ft_printf("hiuhh%"));
// 	printf("%d \n", printf("%%hello"));
// 	printf("%x \n %p \n %c \n", x, &x, d);
// 	ft_printf("%#x\n", x);
// 	ft_printf("%s %d\n", "suiiiiiiiiiiiii", -12345);
// 	ft_printf("%p \n ", &d);
// 	ft_printf("abcdef %d %c %x %X \n", x, d, x, x);
// }
