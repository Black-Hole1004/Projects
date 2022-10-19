/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:03:59 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/10 12:06:57 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function name ft_lstlast
Prototype t_list *ft_lstlast(t_list *lst);
Fichiers de rendu -
Paramètres lst: Le début de la liste.
Valeur de retour Dernier élément de la liste
Fonctions externes autorisées
Aucune
Description Renvoie le dernier élément de la liste.*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (!lst)
		return (NULL);
	while (temp->next)
		temp = temp->next;
	return (temp);
}
