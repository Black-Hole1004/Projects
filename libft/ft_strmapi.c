/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:40:29 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/09 11:50:24 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function name ft_strmapi
Prototype char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
Fichiers de rendu -
Paramètres s: La chaîne de caractères sur laquelle itérer.
f: La fonction à appliquer à chaque caractère.
Valeur de retour La chaîne de caractères résultant des applications
successives de ’f’.
Retourne NULL si l’allocation échoue.
Fonctions externes autorisées
malloc
Description Applique la fonction ’f’ à chaque caractère de la
chaîne de caractères passée en argument pour créer
une nouvelle chaîne de caractères (avec malloc(3))
résultant des applications successives de ’f’.*/

#include <stddef.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*to_return;
	int				i;
	unsigned int	k;

	i = 0;
	to_return = (char *)malloc(ft_strlen(s) * sizeof(char));
	if (!to_return)
		return (NULL);
	while (*s)
	{
		to_return[i] = f(k, *s);
		s++;
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}
