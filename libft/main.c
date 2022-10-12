#include "libft.h"

int main ()
{
	char	*str = "hello world !!";
	char    **s = NULL;

	s = ft_split(str, 32);
	return 0;
}
