/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:17:34 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/23 12:37:06 by ahmaymou         ###   ########.fr       */
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
contenu d’un élément si nécessaire.

[crash]: your lstmap does not work with basic input
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*to_return;
	t_list	*new;

	to_return = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&to_return, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&to_return, new);
		lst = lst->next;
	}
	return (to_return);
}

/*void	*f(void	*str)
{
	const char *str1;

	int i = 0;
	str1 = (const char *) str;
	while (str1[i++])
	{
		ft_toupper(str1[i]);
	}
	return ((void *)str1);
}

int main()
{
	t_list	*elem;
	char	content[] = "hello world !";

	elem = ft_lstnew(content);
	printf("%s\n", ft_lstmap(elem, f, free)->content);
}*/
