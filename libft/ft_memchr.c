/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:53:25 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 18:53:48 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*buff;

	buff = (char *)s;
	if (c == '\0')
	{
		while (*buff)
			buff++;
		return ((char *)buff);
	}
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
