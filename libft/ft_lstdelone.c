/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:12:35 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/10 13:05:24 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function name ft_lstdelone
Prototype void ft_lstdelone(t_list *lst, void (*del)(void
*));
Fichiers de rendu -
Paramètres lst: L’élément à free
del: L’adresse de la fonction permettant de
supprimer le contenu de l’élément.
Valeur de retour Aucune
Fonctions externes autorisées
free
Description Libère la mémoire de l’élément passé en argument en
utilisant la fonction ’del’ puis avec free(3). La
mémoire de ’next’ ne doit pas être free.*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
		del(lst);
	free(lst);
}
