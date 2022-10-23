/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:48:32 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/23 12:25:53 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char			*s;

	s = b;
	while (len--)
		*s++ = (unsigned char )c;
	return (b);
}
/*int main(){
    char s[50] = "hello world !";
    char *s1 = s;

    //memset(s,97,5);
    ft_memset(s,-126,5);
    printf("%s ",s);
}*/
