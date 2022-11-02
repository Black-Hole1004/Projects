#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int		ft_get_len(long long nbr);
char	*deal_hexa(long long nbr , int X, int b);
int 	ft_printf(const char *str, ...);


#endif