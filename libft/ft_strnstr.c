/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:36:23 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/13 19:14:15 by ahmaymou         ###   ########.fr       */
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
	size_t	i;
	size_t	j;
	char	*to_return;

	to_return = (char *)haystack;
	if ((haystack == needle)|| !len)
		return (to_return);
	i = 0;
	if (needle[0] == '\0')
		return (to_return);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return (to_return + i);
		++i;
	}
	return (0);
}
