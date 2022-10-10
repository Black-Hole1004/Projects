/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:58:35 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/10 11:43:27 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stddef.h>
# include <stdlib.h>
# include<unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

size_t	ft_strlen(const char *s);

size_t	ft_strlen(const char *s)
{
	unsigned int	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

void	*ft_bzero(void *b, size_t len)
{
	char	*s;

	s = (char *)b;
	while (len)
	{
		*s = 0;
		s++;
		len--;
	}
	return ((void *)s);
}
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif