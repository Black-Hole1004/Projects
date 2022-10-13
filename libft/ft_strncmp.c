/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:57:57 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/13 10:39:15 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* [fail]: your strncmp does not cast in unsigned char the diff
[fail]: your strncmp does not work with non ascii chars*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (*a && n)
	{
		if (*a - *b != 0)
			return (*a - *b);
		a++;
		b++;
		n--;
	}
	if (*a == '\0' && n != 0)
		return (-(*b));
	return (0);
}
