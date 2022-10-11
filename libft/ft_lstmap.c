/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:17:34 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/10 16:58:44 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function name ft_lstmap
Prototype t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));
Fichiers de rendu -
Paramètres lst: L’adresse du pointeur vers un élément.
f: L’adresse de la fonction à appliquer.
del: L’adresse de la fonction permettant de
supprimer le contenu d’un élément.
Valeur de retour La nouvelle liste.
NULL si l’allocation échoue
Fonctions externes autorisées
malloc, free
Description Itère sur la liste ’lst’ et applique la fonction
’f ’au contenu de chaque élément. Crée une nouvelle
liste résultant des applications successives de
’f’. La fonction ’del’ est là pour détruire le
contenu d’un élément si nécessaire.*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!(*lst))
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*to_return;
	t_list	*temp;

	temp = lst;
	to_return = (t_list *)malloc(ft_lstsize(lst) * sizeof (t_list));
	if (!to_return)
		return (NULL);
	while (temp)
	{
		ft_lstadd_back(&to_return, f(temp));
		del(temp->content);
		free(temp);
		temp = temp->next;
	}
	return (to_return);
}
