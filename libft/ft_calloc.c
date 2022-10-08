/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:15:02 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/08 14:56:01 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *b, size_t len)
{
	char	*s;

	s = (char *)b;
	while (len)
	{
		*s = 0;
		s++;
		len--;
	}
	return ((void *)s);
}

void	*calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * sizeof(size));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
