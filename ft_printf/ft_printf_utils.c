#include "ft_printf.h"

int	ft_get_len(long long nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= (-1);
		i++;
	}
	while (nbr)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}

char	*deal_hexa(long long nbr , int X, int b)
{
	char 		*hexa;
	const char 	*base_16_lower;
	const char 	*base_16_upper;
	int			len;
	int			i;

	i = 0;
	base_16_lower = "0123456789abcdef";
	base_16_upper = "0123456789ABCDEF";
	if (X == 'p' || b == '#')
    	len = ft_get_len(nbr) + 2;
	else
		len = ft_get_len(nbr);
	hexa = (char *)malloc(len);	
	hexa[len] = '\0';
	while (nbr)
	{
		if (X == 'x' || X == 'p')
		{
			hexa[len - 1] = base_16_lower[(nbr % 16)];
			len--;
		}
		else
		{
			hexa[len - 1] = base_16_upper[(nbr % 16)];
			len--;
		}
	nbr = nbr / 16;
	}
    if (X == 'p' || b == '#')
    {
        hexa[0] = '0';
        hexa[1] = 'x';        
    }

	return (hexa);
}

void	print_normal_hashtag(char str, char str2, va_list argptr)
{
	if (str == 'd' || str == 'i' || (str == '#' && (str2 == 'i' || str2 == 'd')))
		ft_putnbr_fd(va_arg(argptr, int), 1);
	else if (str == 'c' ||( str == '#' && str2 == 'c'))
		ft_putchar_fd(va_arg(argptr, int), 1);
	else if (str == 'p')
		ft_putstr_fd(deal_hexa((long long)va_arg(argptr, void *), 'p', '%'), 1);
	else if (str == 'x' || str == 'X')
		ft_putstr_fd(deal_hexa(va_arg(argptr, int), str, '%'), 1);
	else if (str == '#' && (str2 == 'x' || str2 == 'X'))
		ft_putstr_fd(deal_hexa(va_arg(argptr, int), str2, str), 1);
	else if (str == '%' ||( str == '#' && str2 == '%'))
		ft_putchar_fd('%', 1);
	else if (str == 'u')
		ft_putnbr_fd(va_arg(argptr, unsigned int), 1);
	else
		ft_putchar_fd(str, 1);
}

void	print_handle_space()
void	print_handle_plus()