/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:26:42 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/21 15:42:03 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* ft_itoa:       [FAILED] [OK] [OK] [FAILED] [FAILED] [OK] [KO] [KO] [OK]
[fail]: your itoa does not work with basic input
[fail]: your itoa does not work with min int
[fail]: your itoa don't set \0 at the end of the string
[KO]: your itoa does not allocate the good size so the \0 test may be false
[KO]: your itoa does not allocate the good size so the \0 test may be false*/

static int	ft_get_len(long nbr)
{
	int		b;

	b = 0;
	if (!nbr)
		b = 1;
	else if (nbr < 0)
	{
		nbr *= (-1);
		b++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		b++;
	}
	return (b);
}

char	*ft_convert(long nbr, char *s, int lennbr)
{
	if (nbr < 0)
	{
		nbr *= (-1);
		s[0] = '-';
	}
	else if (!nbr)
		s[0] = '0';
	while (nbr != 0)
	{
		s[lennbr] = (nbr % 10) + '0';
		nbr = nbr / 10;
		lennbr--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		lennbr;
	long	nbr;
	char	*s;

	nbr = n;
	if (nbr > 9223372036854775807)
		return ("-1");
	else if (nbr < -9223372036854775807)
		return ("0");
	lennbr = ft_get_len(nbr) - 1;
	s = (char *)malloc((lennbr + 2) * sizeof(char));
	if (!s)
		return (NULL);
	s[lennbr + 1] = '\0';
	s = ft_convert(nbr, s, lennbr);
	return (s);
}
