/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:25:11 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/19 13:33:20 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*     The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the func-
     tions locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the
     last occurrence of c.
	 [fail]: your strrchr does not work with basic input
	 [fail]: your strrchr does not work with not found char
	 */
static int	count_occurences(const char *s, char c)
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
	int				occurence;
	unsigned char	c1;

	c1 = c;
	occurence = count_occurences(s, c1);
	if (c1 == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (*s && occurence)
	{
		if (*s == c1 && occurence == 1)
			return ((char *)s);
		if (*s == c1)
			occurence--;
	s++;
	}
	return (NULL);
}
