/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:38:20 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 18:28:12 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* [fail]: your strlcpy does not return the good value
[fail]: your strlcpy does works whe size < strlen(src)
[fail]: your strlcpy copies while destsize is zero,
 or does not return the size of the string it tried to create*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	while (*src && dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (ft_strlen(src));
}
