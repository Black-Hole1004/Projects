/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:53:25 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/18 16:16:29 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char *)s;
	if (c == '\0')
		return (buff + ft_strlen(s));
	while (*buff && *buff != c && n)
	{
		buff++;
		n--;
	}
	if (*buff == '\0' || n == 0)
		return (NULL);
	else
		return (buff);
}
