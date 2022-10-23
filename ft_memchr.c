/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:53:25 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/23 19:06:21 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char s[] = {0, 1, 2 ,3 ,4 ,5};
 check(ft_memchr(s, 0, 0) == NULL); showLeaks();
 check(ft_memchr(s, 0, 1) == s); showLeaks();
 check(ft_memchr(s, 2, 3) == s + 2); showLeaks();
 check(ft_memchr(s, 6, 6) == NULL); showLeaks();
 check(ft_memchr(s, 2 + 256, 3) == s + 2); showLeaks();*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char *)s;
	while (n--)
	{
		if ((unsigned char) c == *buff)
			return (buff);
		buff++;
	}
	return (NULL);
}


