#include "ft_printf.h"

// %d %i %s %c %i %x %X %p % 
int	ft_get_len(long nbr)
{
	int		b;

	b = 0;
	if (!nbr)
		b = 1;
	else if (nbr < 0)
	{
		nbr *= (-1);
		b++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		b++;
	}
	return (b);
}

char	*deal_hexa(long nbr , char X)
{
	char *hexa;
	char *base_16_min;
	char *base_16_max;

	int	len;

	base_16_min = "0123456789abcdef";
	base_16_max = "0123456789ABCDEF";
	len = ft_get_len(nbr);
	hexa = (char *)malloc(len);
	while (len - 1)
	{
		if (X = 'x')
			{hexa[len - 1] = base_16_min[(nbr % 16)] + 48;
			len--;}
		else{
			hexa[len - 1] = base_16_max[(nbr % 16)] + 48;
			len--;}
	nbr = nbr / 16;
	}
	hexa[len] = '\0';
	return (hexa);
}

int ft_printf(const char *str, ...){
	va_list argptr;
	va_start(argptr, str);

	while (*str){
		if (*str == '%')
		{
			str++;
			if (*str == 'd' || *str == 'i')
				ft_putnbr_fd(va_arg(argptr, int), 1);
			else if (*str == 'c')
				ft_putchar_fd(va_arg(argptr, int), 1);
		   // else if (*str == 'p')
				//ft_putstr(&va_arg(argptr, void *));
			else if (*str == 'x' || *str == 'X')
			    ft_putstr_fd(deal_hexa(va_arg(argptr, int), *str), 1);
			else if (*str == '%')
				ft_putchar_fd('%', 1);
			else if (*str == 'u')
				ft_putnbr_fd(va_arg(argptr, unsigned int), 1);
			else
				ft_putchar_fd(*str, 1);
		}
		else
			ft_putchar_fd(*str, 1);
	str++;
	}
	va_end(argptr);
	return (0);
}
int main()
{
	int x = 28754;
	char d = 'c';
	//printf("abcdef %d %c \n", x, d);
	printf("%s %d\n", deal_hexa(x, 'X'), ft_get_len(x));
	//ft_printf("abcdef %d %c %x %X \n", x, d , x , x);
}