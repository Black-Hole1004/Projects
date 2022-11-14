/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:18:14 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/14 16:07:06 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char				*to_return;
	unsigned int		i;
	unsigned int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	to_return = (char *)malloc((len + 1)
			* sizeof(char));
	if (!to_return)
		return (NULL);
	ft_strlcpy(to_return, s1, ft_strlen(s1) + 1);
	ft_strlcat(to_return, s2, len + 1);
	free(s1);
	return (to_return);
}

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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ls;
	size_t	ld;
	size_t	i;

	ls = ft_strlen(src);
	if (!dst && !dstsize)
		return (ls);
	ld = ft_strlen(dst);
	if (!dstsize || dstsize <= ld)
		return (ls + dstsize);
	i = 0;
	while (src[i] && (i < (dstsize - ld - 1)))
	{
		dst[ld + i] = src[i];
		i++;
	}
	dst[ld + i] = '\0';
	return (ls + ld);
}

char	*ft_strdup(void)
{
	char	*copy;

	copy = (char *)malloc(1);
	if (!copy)
		return (NULL);
	copy[0] = 0;
	return (copy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len && start <= ft_strlen(s))
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

char	*get_next_line(int fd)
{
	return (line(fd, 1));
}
