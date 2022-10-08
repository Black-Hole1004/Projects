/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:52:22 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/08 14:53:12 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s, const void *s2, size_t n)
{
	char	*s3;
	char	*s4;

	s3 = (char *)s;
	s4 = (char *)s2;
	while (*s3 && n)
	{
		if (*s3 - *s4 != 0)
			return (*s3 - *s4);
		s3++;
		s4++;
		n--;
	}
	if (*s3 == '\0')
		return (-(*s4));
	return (0);
}

// int main()
// {
// 	char s[50] = "hello ";
// 	char s2[50] = "hello";
// 	printf("%d\n", memcmp(s, s2, 11));
// 	printf("%d", ft_memcmp(s, s2, 11));
// }
