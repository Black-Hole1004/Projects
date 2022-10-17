/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:21:30 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/17 14:45:43 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function name ft_strtrim
Prototype char *ft_strtrim(char const *s1, char const *set);
Fichiers de rendu -
Paramètres s1: La chaîne de caractères à trimmer.
set: Le set de référence de caractères à trimmer.
Valeur de retour La chaîne de caractères trimmée.
NULL si l’allocation échoue.
Fonctions externes autorisées
malloc
Description Alloue (avec malloc(3)) et retourne une copie de
la chaîne ’s1’, sans les caractères spécifiés
dans ’set’ au début et à la fin de la chaîne de  
EX: s1 = "1337 hello world ! 1337"  set = "1337"
caractères.*/
#include "libft.h"
/* [crash]: your strtrim does not work with basic input
[crash]: your strtrim does not work with basic input
[crash]: your strtrim does not work with basic input
[crash]: your strtrim does not work with full blank input
[timeout]: see the log file for informations
[crash]: your strtrim did not allocate the good size so the \0 test may be false
[crash]: your strtrim does not allocate memory
[crash]: your strtrim does not set \0 to the end of the string*/
static int	is_set(const char *set, const char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
	i++;
	}
	return (0);
}

static char	*trim_first(const char *s, const char *set)
{
	while (*s && is_set(set, *s))
		s++;
	return ((char *)s);
}

static size_t	trim_last(const char *s, const char *set, size_t len_s1)
{
	char	*temp;

	temp = (char *)s;
	while (is_set(set, temp[len_s1 - 1]) && len_s1)
		len_s1--;
	return (len_s1 + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len_s1;
	char			*to_return;

	if (!s1)
		return (NULL);
	s1 = trim_first(s1, set);
	len_s1 = trim_last(s1, set, ft_strlen(s1));
	to_return = (char *)malloc((len_s1 + 1) * sizeof(char));
	if (!to_return)
		return (NULL);
	ft_strlcpy(to_return, s1, len_s1);
	return (to_return);
}
