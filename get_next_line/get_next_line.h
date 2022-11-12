/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:18:08 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/12 19:32:04 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include <stdbool.h>

char	*ft_strdup(void);
char	*ft_strjoin(char const *s1, char const *s2);
bool	ft_strchr1(const char *s, int c);
char	*get_next_line(int fd);
char	*line(int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_strlen(const char *s);
int		newline_index(char *buffer);
#endif