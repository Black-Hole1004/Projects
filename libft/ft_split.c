/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:30:40 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 14:37:57 by ahmaymou         ###   ########.fr       */
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
#include "libft.h"

int	is_charset(char c, char charset)
{
	int	i;

	i = 0;
	if (c == charset)
		return (1);
	return (0);
}

int	count_words(const char *str, char charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_charset(str[i], charset))
			i++;
	}
	return (count);
}

int	word_length(const char *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	return (i);
}

char	*ready_word(const char *str, char charset)
{
	int		length_of_word;
	int		i;
	char	*word;

	i = 0;
	length_of_word = word_length(str, charset);
	word = (char *)malloc(sizeof(char) * (length_of_word + 1));
	while (i < length_of_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_words(str, c) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && is_charset(*str, c))
			str++;
		if (*str != '\0')
		{
			strings[i] = ready_word(str, c);
			i++;
		}
		while (*str && !is_charset(*str, c))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
