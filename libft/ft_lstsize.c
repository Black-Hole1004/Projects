/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:53:55 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/23 14:36:28 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function name ft_lstsize
Prototype int ft_lstsize(t_list *lst);
Fichiers de rendu -
Paramètres lst: Le début de la liste.
Valeur de retour Taille de la liste
Fonctions externes autorisées
Aucune
Description Compte le nombre d’éléments de la liste.*/
int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		count;

	temp = lst;
	count = 0;
	if (lst == NULL)
		return (0);
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
