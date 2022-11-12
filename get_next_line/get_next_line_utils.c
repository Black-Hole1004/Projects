/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:18:11 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/12 19:49:43 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	
	while (s[i])
		i++;
	return (i);
}

int	newline_index(char	*buff)
{
	int	i;

	i = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	return (i + 1);
}

bool	ft_strchr1(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (false);
	while (s[i])
	{
		if (s[i] == c)
			return (true);
	i++;
	}
	return (false);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;

	c1 = c;
	if (c1 == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == c1)
			return ((char *)s + 1);
	s++;
	}
	return (0);
}

char *line(int fd)
{
	static char	*buffer;
	char		*line;
	char		*tmp;
	char		buff[BUFFER_SIZE + 1];
	int			is_read = 1;
	//printf(">----->:%s\n", buffer);
	//is_read = read(fd, buff, BUFFER_SIZE);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (is_read && !ft_strchr1(buffer, '\n'))
	{
		is_read = read(fd, buff, BUFFER_SIZE);
		if (is_read < 0)
			return NULL;
		if (!buffer)
			buffer = ft_strdup();
		tmp = buffer;
		buffer = ft_strjoin(buffer, buff);
		if (*tmp != 0)
			free(tmp);
	}
	line = malloc(newline_index(buffer) + 1);
	if (!line)
		return (NULL);
	ft_strlcpy(line, buffer, newline_index(buffer) + 1);
	buffer = ft_strchr(buffer, '\n');
	return (line);
}
