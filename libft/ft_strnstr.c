/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:36:23 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/08 15:53:41 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*The strnstr() function locates the first occurrence of the null-termi-
	 nated string needle in the string haystack, where not more than len char-
	 acters are searched.  Characters that appear after a `\0' character are
	 not searched.  Since the strnstr() function is a FreeBSD specific API, it
	 should only be used when portability is not a concern*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i] == needle[j])
			{
				j++;
				i++;
			}
			else
				break ;
		}
	}
	return (haystack + i);
}
