/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:05:21 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/25 13:48:28 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*to_return;
	unsigned int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	to_return = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
			* sizeof(char));
	if (!to_return)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		to_return[i] = s1[i];
		i++;
	}
	while (i < ft_strlen(s2) + ft_strlen(s1))
	{
		to_return[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}
