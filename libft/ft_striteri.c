/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:23:07 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/24 10:28:29 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function name ft_striteri
Prototype void ft_striteri(char *s, void (*f)(unsigned int,
char*));
Fichiers de rendu -
Paramètres s: La chaîne de caractères sur laquelle itérer.
f: La fonction à appliquer à chaque caractère.
Valeur de retour Aucune
Fonctions externes autorisées
Aucune
Description Applique la fonction ’f’ à chaque caractère de la
chaîne de caractères transmise comme argument,
et en passant son index comme premier argument.
Chaque caractère est transmis par adresse à ’f’
afin d’être modifié si nécessaire.
[fail]: your striteri does no work
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}

/*void	ft_func(unsigned int zid, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = zid;
		i++;
	}
}

int	main(void)
{
	char	array[] = "hello world !";
	ft_striteri(array, &ft_func);
	printf("%s\n",array);
	return (0);
} */
