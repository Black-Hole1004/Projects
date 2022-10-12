/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:06:07 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 18:39:48 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Function name ft_lstclear
Prototype void ft_lstclear(t_list **lst, void (*del)(void
*));
Fichiers de rendu -
Paramètres lst: L’adresse du pointeur vers un élément.
del: L’adresse de la fonction permettant de
supprimer le contenu d’un élément.
Valeur de retour Aucune
Fonctions externes autorisées
free
Description Supprime et libère la mémoire de l’élément passé en
paramètre, et de tous les éléments qui suivent, à
l’aide de ’del’ et de free(3)
Enfin, le pointeur initial doit être mis à NULL.

[crash]: your lstclear does not work with basic input
[crash]: bad call number of the function pointer
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	if (*lst)
	{
		while (temp)
		{
			ft_lstdelone(temp, del);
			temp = temp->next;
		}
	}
	free(lst);
}
