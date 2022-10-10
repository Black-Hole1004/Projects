/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:37:49 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/10 17:02:27 by ahmaymou         ###   ########.fr       */
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
#include <stddef.h>
#include "libft.h"

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
