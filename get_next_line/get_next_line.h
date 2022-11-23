/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:18:08 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/20 17:01:11 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <stdbool.h>

char			*ft_strdup(void);
char			*ft_strjoin(char *s1, char *s2);
bool			ft_strchr1(const char *s, int c);
char			*ft_save(char *s, int c, unsigned int ls);
char			*get_next_line(int fd);
char			*line(int fd, int is_read, char *line1);
size_t			ft_strlcpy(char *d, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_substr(char const *s, unsigned int start, size_t len);
unsigned int	ft_strlen(const char *s);
int				newline_index(char *buffer);

#endif