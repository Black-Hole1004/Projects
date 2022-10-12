/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:21:30 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 15:32:36 by ahmaymou         ###   ########.fr       */
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

#include <stddef.h>
#include "libft.h"

int	check_set(const char *s, const char *set)
{
	int	j;

	j = 0;
	while (s[j] && s[j] == set[j])
		j++;
	if (!set[j])
		return (1);
	return (0);
}

int	found_set_first(const char *s, const char *set)
{
	if (check_set(s, set))
		return (1);
	return (0);
}

int	found_set_last(const char *s, const char *set)
{
	unsigned int	len_set;
	unsigned int	len_s;
	unsigned int	i;

	len_set = ft_strlen(set);
	len_s = ft_strlen(s);
	i = 0;
	while (i++ < (len_s - len_set))
		s++;
	if (check_set(s, set))
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len_set;
	char			*to_return;
	unsigned int	i;

	len_set = ft_strlen(set);
	to_return = (char *)malloc(ft_strlen(s1) * sizeof(char));
	if (!to_return)
		return (NULL);
	i = -1;
	if (found_set_first(s1, set))
	{
		while (len_set)
		{
			s1++;
			len_set--;
		}
	}
	if (found_set_last(s1, set))
	{
		while (i++ < (unsigned int )(ft_strlen(s1) - ft_strlen(set)))
			to_return[i] = s1[i];
	}
	to_return[i] = '\0';
	return (to_return);
}
