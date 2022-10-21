/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:52:22 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/21 15:41:22 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s, const void *s2, size_t n)
{
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *)s;
	s4 = (unsigned char *)s2;
	while (n--)
	{
		if (*s3 - *s4 != 0)
			return (*s3 - *s4);
		s3++;
		s4++;
	}
	return (0);
}

/*int main()
{
	char s[50] = "hello ";
	char s2[50] = "hello";
	printf("%d\n", memcmp(s, s2, 11));
	printf("%d", ft_memcmp(s, s2, 11));
}*/
