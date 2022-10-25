/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:37:49 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/24 17:01:23 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Prototype char *ft_substr(char const *s, unsigned int start,size_t len);
Fichiers de rendu -
Paramètres s: La chaîne de laquelle extraire la nouvelle
chaîne.
start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
len: La taille maximale de la nouvelle chaîne.
Valeur de retour La nouvelle chaîne de caractères.
NULL si l’allocation échoue.
Fonctions externes autorisées
malloc
Description Alloue (avec malloc(3)) et retourne une chaîne de
caractères issue de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index ’start’ et
a pour taille maximale ’len’.
[crash]: your substr does not work with valid input
[crash]: your substr does not work with valid input
[fail]: your substr did not allocate the good size so the \0 test may be false
[crash]: your substr does not set \0 to the end of the string
[crash]: your substr does not work for a whole string
[crash]: your substr does not work when start >= ft_strlen(s)
s = ft_substr(str, 42, 42000000);
	 6 check(!strcmp(s, ""));
	 7 mcheck(s, 1); free(s); free(str) 
	 s = ft_substr("tripouille", 1, 1);
	 3  check(!strcmp(s, "r"));
	 4  mcheck(s, 2); free(s); 
	 ft_substr("hola", 4294967295, 18446744073709551615) */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len && start <= ft_strlen(s))
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
