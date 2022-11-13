/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:18:11 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/13 16:28:58 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	
	while (s[i])
		i++;
	return ((unsigned int)i);
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

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char					*substr;
	unsigned int			i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len && start <= ft_strlen(s))
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	//free((char *)s);
	substr[i] = '\0';
	return (substr);
}

char	*ft_strchr(char *s, int c)
{
	char	*s1;
	unsigned int		i;

	i = 0;
	s1 = (char *)malloc(sizeof(char) * (ft_strlen(s) - c) + 1);
	while (i < ft_strlen(s) - c)
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	//free(s);
	return (s1);
}

char *line(int fd, int is_read)
{
	static char	*buffer;
	char		*line;
	char		buff[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
		buffer = ft_strdup();
	while (is_read && !ft_strchr1(buffer, '\n'))
	{
		is_read = read(fd, buff, BUFFER_SIZE);
		if (is_read < 0)
		{
			free(buffer);
			return NULL;
		}
		buff[is_read] = '\0';
		buffer = ft_strjoin(buffer, buff);
	}
	if (!(*buffer) && !is_read)
	{
		free(buffer);
		return (NULL);
	}
	line = malloc(newline_index(buffer) + 1);
	if (!line)
		return (NULL);
	line = ft_substr(buffer , 0, newline_index(buffer));
	buffer = ft_strchr(buffer, newline_index(buffer));
	return (line);
}
