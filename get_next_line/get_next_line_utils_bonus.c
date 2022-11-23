/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:46:01 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/21 14:12:19 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

char	*ft_save(char *s, int c, unsigned int ls)
{
	char				*s1;
	unsigned int		i;

	i = 0;
	s1 = ft_substr(s, c, ls - c + 1);
	free(s);
	return (s1);
}

char	*line_bonus(int fd, int is_read, char *line1)
{
	static char	*buffer[OPEN_MAX];
	char		*buff;

	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	while (is_read && !ft_strchr1(buffer[fd], '\n'))
	{
		is_read = read(fd, buff, BUFFER_SIZE);
		if (is_read < 0)
		{
			free(buffer[fd]);
			return (buffer[fd] = 0, free(buff), NULL);
		}
		if (!buffer[fd])
			buffer[fd] = ft_strdup();
		buff[is_read] = '\0';
		buffer[fd] = ft_strjoin(buffer[fd], buff);
	}
	if (!buffer[fd] && !is_read)
		return (free(buff), NULL);
	line1 = ft_substr(buffer[fd], 0, newline_index(buffer[fd]));
	buffer[fd] = ft_save(buffer[fd], newline_index(buffer[fd]),
			ft_strlen(buffer[fd]));
	return (free(buff), line1);
}
