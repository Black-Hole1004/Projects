/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:48:23 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/19 13:31:06 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* ft_strchr(s, 't' + 256) == s) */
char	*ft_strchr(const char *s, int c)
{
	char			*temp;
	unsigned char	c1;

	c1 = c;
	temp = NULL;
	if (c1 == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == c1)
		{
			temp = (char *)s;
			break ;
		}
	s++;
	}
	return (temp);
}
