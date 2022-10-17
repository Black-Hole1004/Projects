/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:51:05 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/17 14:31:47 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	if (s < d)
	{
		while (len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}

// int main()
// {
// 	char dst[50] = "hello world !";
// 	const char src[50] = "test teset test test";

// 	// memmove(dst,src,15);
// 	ft_memmove(dst, src, 15);
// 	printf("%s", dst);
// }
