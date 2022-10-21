/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:03:35 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/21 12:11:03 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_putstr_fd
Prototype void ft_putstr_fd(char *s, int fd);
Fichiers de rendu -
Paramètres s: La chaîne de caractères à écrire.
fd: Le descripteur de fichier sur lequel écrire.
Valeur de retour Aucune
Fonctions externes autorisées
write
Description Écrit la chaîne de caractères ’s’ sur le
descripteur de fichier donné.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
