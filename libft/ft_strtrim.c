/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:21:30 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/13 17:10:59 by ahmaymou         ###   ########.fr       */
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

char*	trim_first(const char *s, const char *set)
{
	int	i = 0;
	while (*s && *s == set[i])
	{
		s++;
		i++;
	}
		
	return ((char *)s);
}

int	found_set_last(const char *s, const char *set)
{
	unsigned int	len_set;
	unsigned int	len_s;
	unsigned int	i;

	len_set = ft_strlen(set);
	len_s = ft_strlen(s);
	i = 0;
	while (s[len_s] == set[len_set] && len_set && len_s)
	{
		len_s--;
		len_set--;
	}
	if (!len_set)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len_set;
	char			*to_return;
	unsigned int	i;

	if (!s1)
		return (NULL);
	s1 = trim_first(s1, set);
	len_set = ft_strlen(set);
	to_return = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!to_return)
		return (NULL);
	i = 0;
	if (found_set_last(s1, set))
	{
		while (i < (ft_strlen(s1) - len_set) -1);
		{
			to_return[i] = s1[i];
			i++;
		}
	}
	to_return[i] = '\0';
	return (to_return);
}
int main()
{
	const char s[30] = "1337 hello world this is 1337";
	const char set[6] = "1337";
	printf("%d\n",found_set_last(s,set));
	printf("%s",ft_strtrim(s, set));
	return (0);
}
