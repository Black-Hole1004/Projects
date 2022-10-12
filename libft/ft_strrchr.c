/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:25:11 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 11:51:55 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*     The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the func-
     tions locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the
     last occurrence of c.*/
int	count_occurences(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	if (count_occurences(s, c) > 0)
	{
		while (*s)
		{
			if (*s == c && count <= (count_occurences(s, c) - 1))
				return ((char *)s);
			s++;
			count++;
		}
	}
	return (NULL);
}
