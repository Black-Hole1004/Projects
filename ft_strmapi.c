/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:40:29 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/21 15:39:34 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

/* [fail]: your strmapi does not allocate the good size so the 
\0 test may be false*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*to_return;
	int				i;

	i = 0;
	if (!s || !f)
		return (NULL);
	to_return = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!to_return)
		return (NULL);
	while (*s)
	{
		to_return[i] = f(i, *s);
		s++;
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}

// char	ft_lm9awwed(unsigned int zid, char c)
// {
// 	c += zid;
// 	return (c);
// }

// int	main(void)
// {
// 	char	array[] = "hello world !";
// 	char	*array2;

// 	array2 = ft_strmapi(array, &ft_lm9awwed);
// 	printf("%s\n",array2);
// 	return (0);
// }