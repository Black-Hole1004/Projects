/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:36:23 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/08 17:21:07 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	temp_len;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		temp_len = len;
		while (haystack[i + j] && haystack[i + j] == needle[j] && temp_len)
		{
			if (needle[j + 1] == '\0')
				return ((haystack + i));
			j++;
			temp_len--;
		}
		++i;
	}
	return (0);
}
