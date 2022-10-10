/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:30:40 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/10 10:22:07 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function name ft_split
Prototype char **ft_split(char const *s, char c);
Fichiers de rendu -
Paramètres s: La chaîne de caractères à découper.
c: Le caractère délimiteur.
Valeur de retour Le tableau de nouvelles chaînes de caractères
résultant du découpage.
NULL si l’allocation échoue.
Fonctions externes autorisées
malloc, free   "hello  this is the word, get it"
Description Alloue (avec malloc(3)) et retourne un tableau
de chaînes de caractères obtenu en séparant ’s’ à
l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL.*/

#include <stddef.h>
#include "libft.h"

char	*skip_charset(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			s = skip_charset(s, c);
			if (!(*s))
				count++;
			i = 1;
		}
		if (!i)
			s++;
	}
	return (count);
}

int	word_length(char const *s, char c)
{
	int	len;

	len = 0;
	s = skip_charset(s, c);
	while (*s && *s == c)
	{
		s++;
		len++;
	}
	return (len);
}

char	*ready_word(char const *s, char c)
{
	int		word_len;
	char	*word;
	int		i;

	i = 0;
	word_len = word_length;
	while (word_len)
	{
		word[i] = s[i];
		word_len--;
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words_count;
	char	**to_return;

	words_count = count_words(s, c);
	i = -1;
	to_return = (char **)malloc((words_count + 1) * sizeof(char *));
	while (*s)
	{
		s = skip_charset(s, c);
		if (*s)
		{
			to_return[i] = ready_word(s, c);
			i++;
		}
		s = skip_charset(s, c);
	}
}
