/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:13:41 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/10 16:57:41 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function name ft_putendl_fd
Prototype void ft_putendl_fd(char *s, int fd);
Fichiers de rendu -
Paramètres s: La chaîne de caractères à écrire.
fd: Le descripteur de fichier sur lequel écrire.
Valeur de retour Aucune
Fonctions externes autorisées
write
Description Écrit La chaîne de caractères ’s’ sur le
descripteur de fichier donné suivie d’un retour à
la ligne.*/

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

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
