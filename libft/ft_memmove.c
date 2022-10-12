/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:51:05 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 09:54:01 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	len--;
	d = (char *)dst;
	s = (char *)src;
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
