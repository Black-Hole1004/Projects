/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:56:08 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/08 14:57:05 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
