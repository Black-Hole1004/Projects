/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:36:23 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/13 17:18:01 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* ft_strnstr:    [OK] [OK] [FAILED] [OK] 
[FAILED] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [CRASH]
[fail]: your strnstr does not work with basic input
[fail]: your strnstr does not work with basic input
[crash]: your strnstr crush when null parameter is sent with a size of 0 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	temp_len;

	if ((!haystack || !needle) && !len)
		return (NULL);
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		temp_len = len;
		while (haystack[i + j] && haystack[i + j] == needle[j] && temp_len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
			temp_len--;
		}
		++i;
	}
	return (0);
}
