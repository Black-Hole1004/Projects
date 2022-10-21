/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:05:21 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/21 15:39:49 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function name ft_strjoin
Prototype char *ft_strjoin(char const *s1, char const *s2);
Fichiers de rendu -
Paramètres s1: La chaîne de caractères préfixe.
s2: La chaîne de caractères suffixe.
Valeur de retour La nouvelle chaîne de caractères.
NULL si l’allocation échoue.
Fonctions externes autorisées
malloc
Description Alloue (avec malloc(3)) et retourne une nouvelle
chaîne, résultat de la concaténation de s1 et s2.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*to_return;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	to_return = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!to_return)
		return (NULL);
	while (*s1)
	{
		to_return[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		to_return[i] = *s2;
		i++;
		s2++;
	}
	to_return[i] = '\0';
	return (to_return);
}
