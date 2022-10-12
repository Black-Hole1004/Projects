/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:37:49 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 18:30:09 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prototype char *ft_substr(char const *s, unsigned int start,size_t len);
// Fichiers de rendu -
// Paramètres s: La chaîne de laquelle extraire la nouvelle
// chaîne.
// start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
// len: La taille maximale de la nouvelle chaîne.
// Valeur de retour La nouvelle chaîne de caractères.
// NULL si l’allocation échoue.
// Fonctions externes autorisées
// malloc
// Description Alloue (avec malloc(3)) et retourne une chaîne de
// caractères issue de la chaîne ’s’.
// Cette nouvelle chaîne commence à l’index ’start’ et
// a pour taille maximale ’len’.
#include "libft.h"
/* [crash]: your substr does not work with valid input
[crash]: your substr does not work with valid input
[fail]: your substr did not allocate the good size so the \0 test may be false
[crash]: your substr does not set \0 to the end of the string
[crash]: your substr does not work for a whole string
[crash]: your substr does not work when start >= ft_strlen(s)*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	while (*s && *s != (int)start)
		s++;
	if (!*s)
		return (NULL);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while ((size_t)i < len)
	{
		substr[i] = s[i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
