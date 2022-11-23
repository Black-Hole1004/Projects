/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:18:14 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/21 15:06:21 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char			*to_return;
	unsigned int	i;
	unsigned int	len;
	unsigned int	len_s;

	if (!s2)
		return (NULL);
	len_s = ft_strlen(s1);
	len = len_s + ft_strlen(s2);
	i = 0;
	to_return = (char *)malloc((len + 1)
			* sizeof(char));
	if (!to_return)
		return (NULL);
	ft_strlcpy(to_return, s1, len_s + 1);
	while (s2[i] && (i < (len - len_s)))
	{
		to_return[len_s + i] = s2[i];
		i++;
	}
	to_return[len] = '\0';
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
	char			*substr;
	size_t			i;
	unsigned int	len1;

	i = 0;
	len1 = ft_strlen(s);
	if (!s || !(*s))
		return (NULL);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len && start <= len1)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

char	*get_next_line(int fd)
{
	char		*line1;

	line1 = NULL;
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	return (line(fd, 1, line1));
}
