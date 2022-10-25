/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:04:05 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/24 10:49:21 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*temp;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	temp = (unsigned char *)dst;
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	dst = d;
	return ((void *)temp);
}
