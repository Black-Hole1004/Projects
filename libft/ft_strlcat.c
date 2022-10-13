/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:38:36 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/13 19:21:58 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		res;
	size_t	ls;
	size_t	ld;
	size_t	i;

	if ((!src || !dst) && !dstsize)
		return (0);
	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	i = -1;
	while (*dst)
		dst++;
	if (dstsize > ld)
		res = ls + ld;
	else
		res = ls + dstsize;
	while (*src && i++ < dstsize - ld - 1)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (res);
}

// ft_strlcat:    [FAILED] [OK] [FAILED] [OK] [FAILED] 
//[OK] [OK] [OK] [OK] [OK] [OK] [OK] [CRASH]
// [fail]: your strlcat does not work with basic input
// [fail]: your strlcat does not work with basic input
// [fail]: your strlcat does not work with a size of 0
// [crash]: your strlcat crush when null parameter is sent with a size of 0
