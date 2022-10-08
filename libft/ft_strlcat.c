/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:38:36 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/08 14:40:34 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		res;
	size_t	ls;
	size_t	ld;

	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	while (*dst)
		dst++;
	if (dstsize > ld)
		res = ls + ld;
	else
		res = ls + dstsize;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (res);
}

// int main(){
//     char d[50] = "hello world !";
//     char s[] = "this is 1337";
//     //printf("%d\n",ft_strlcat(d,s,50));
//      printf("%lu",strlcat(d,s,5));
//     //printf("%s",memchr(s,22,7));
// }
