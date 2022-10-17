/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:26:42 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/17 12:04:02 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* ft_itoa:       [FAILED] [OK] [OK] [FAILED] [FAILED] [OK] [KO] [KO] [OK]
[fail]: your itoa does not work with basic input
[fail]: your itoa does not work with min int
[fail]: your itoa don't set \0 at the end of the string
[KO]: your itoa does not allocate the good size so the \0 test may be false
[KO]: your itoa does not allocate the good size so the \0 test may be false*/
// int	nbr_len(int nbr)
// {
// 	int	count;

// 	count = 0;
// 	if (nbr < 0)
// 	{
// 		nbr *= (-1);
// 		count = 1;
// 	}
// 	while (nbr)
// 	{
// 		nbr = nbr / 10;
// 		count++;
// 	}
// 	return (count);
// }

// char	*ft_itoa(int n)
// {
// 	int			len_nbr;
// 	int			temp;
// 	char		*to_string;
// 	const char	*min_int;

// 	len_nbr = nbr_len(n);
// 	temp = nbr_len(n);
// 	min_int = "-2147483648";
// 	to_string = (char *)malloc((len_nbr + 1) * sizeof(char));
// 	if (!to_string)
// 		return (NULL);
// 	if (n == -2147483648)
// 		return ((char *)min_int);
// 	else if (n < 0)
// 	{
// 		n *= (-1);
// 		to_string[0] = '-';
// 		len_nbr++;
// 	}
// 	while (n)
// 	{
// 		to_string[len_nbr - 1] = (n % 10) + 48;
// 		n = n / 10;
// 		len_nbr--;
// 	}
// 	to_string[temp + 1] = '\0';
// 	return (to_string);
// }
// static const char	*is_min(void)
// {
// 	const char	*min_int;

// 	min_int = malloc(13 * sizeof(const char));
// 	if (!min_int)
// 		return (NULL);
// 	min_int = "-2147483648";
// 	return ((const char *)min_int);
// }

static int	ft_get_len(int nbr)
{
	int		b;

	if (nbr == -2147483648)
		return (b = 14);
	b = 0;
	if (nbr < 0)
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

char	*ft_itoa(int nbr)
{
	int		lennbr;
	char	*s;

	lennbr = ft_get_len(nbr) - 1;
	s = (char *)malloc((lennbr + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[lennbr + 1] = '\0';
	if (nbr == -2147483648)
		return ("-2147483648");
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
