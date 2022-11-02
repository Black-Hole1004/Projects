#include "ft_printf.h"

// %d %i %s %c %i %x %X %p % 

int ft_printf(const char *str, ...){
	va_list argptr;
	va_start(argptr, str);

	while (*str){
		if (*str == '%')
		{
			str++;
			print_normal(*str, *(str + 1), argptr);
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
	int x = 584525;
	// "0x00007ffee4fa869f"
	char d = 'c';
	 ft_printf("%#%\t%p\t%c\n", &x, d);
	 printf("%#%\t%p\t%c\t", &x, d);
	// printf("%x\n%p\n%c\n", x, &x, d);
	//ft_printf("%#x\n", x);
	//printf("%s %d\n", deal_hexa(x, 'X'), ft_get_len(x));
	// printf("%p \n ", &d);
	//ft_printf("abcdef %d %c %x %X \n", x, d , x , x);
}
