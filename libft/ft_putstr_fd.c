/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:03:35 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/10 16:57:32 by ahmaymou         ###   ########.fr       */
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

#include <stddef.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
