/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:57:57 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 18:27:48 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* [fail]: your strncmp does not cast in unsigned char the diff
[fail]: your strncmp does not work with non ascii chars*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && n)
	{
		if (*s1 - *s2 != 0)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	if (*s1 == '\0' && n != 0)
		return (-(*s2));
	return (0);
}
