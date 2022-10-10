/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:51:05 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/10 14:08:32 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	char	*temp;

	s = (char *)src;
	d = (char *)dst;
	temp = (char *)dst;
	while (len)
	{
		*d = *s;
		d++;
		s++;
		len--;
	}
	dst = d;
	return ((void *)temp);
}

// int main()
// {
// 	char dst[50] = "hello world !";
// 	const char src[50] = "test teset test test";

// 	// memmove(dst,src,15);
// 	ft_memmove(dst, src, 15);
// 	printf("%s", dst);
// }
