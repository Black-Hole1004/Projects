/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:11:56 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/10 13:17:13 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function name ft_lstiter
Prototype void ft_lstiter(t_list *lst, void (*f)(void *));
Fichiers de rendu -
Paramètres lst: L’adresse du pointeur vers un élément.
f: L’adresse de la fonction à appliquer.
Valeur de retour Aucune
Fonctions externes autorisées
Aucune
Description Itère sur la liste ’lst’ et applique la fonction
’f’ au contenu chaque élément.*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
