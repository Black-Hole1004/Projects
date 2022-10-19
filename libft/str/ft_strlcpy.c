/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:38:20 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/13 11:49:17 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* [fail]: your strlcpy does not return the good value
[fail]: your strlcpy does works whe size < strlen(src)
[fail]: your strlcpy copies while destsize is zero,
 or does not return the size of the string it tried to create*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (!dstsize)
		return (len);
	while (*src && (dstsize - 1))
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (len);
}

// int main(){
//      char	d[10] ;
// 	 char	d2[10] ;
// 	 char src [] = "noureddineee";
// 	 char src2 [] = "noureddineee";
// 	printf ("%zu\n", ft_strlcpy(d,src,10));
// 	//printf ("%s\n", d);
// 	//printf ("%zu\n", strlcpy(d2,src2,10));
// 	//printf ("%s\n", d2);
// }