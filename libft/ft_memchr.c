/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:53:25 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/08 14:54:00 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*buff;

	buff = (char *)s;
	while (*buff && *buff != c && n)
	{
		buff++;
		n--;
	}
	if (*buff == '\0' || n == 0)
		return (NULL);
	else
		return (buff);
}

// int main()
// {
// 	char s[50] = "hello world !";
// 	printf("%s", ft_memchr(s, 22, 6));
// }
