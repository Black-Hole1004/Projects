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
	//int		res;
	size_t	ls;
	size_t	ld;
	size_t	i;

	
	ls = ft_strlen(src);
	if (!dst && !dstsize)
		return (ls + dstsize);
	ld = ft_strlen(dst);
	if (!dstsize || dstsize <= ld)
		return (ls + dstsize);
	i = 0;
	while (src[i] && (i < (dstsize - ld - 1)))
	{
		dst[ld + i] = src[i];
		i++;
	}
	dst[ld + i] = '\0';
	return (ls + ld);
}

// ft_strlcat:    [FAILED] [OK] [FAILED] [OK] [FAILED] 
//[OK] [OK] [OK] [OK] [OK] [OK] [OK] [CRASH]
// [fail]: your strlcat does not work with basic input
// [fail]: your strlcat does not work with basic input
// [fail]: your strlcat does not work with a size of 0
// [crash]: your strlcat crush when null parameter is sent with a size of 0
