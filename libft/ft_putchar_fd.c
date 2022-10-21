/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:44:43 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/21 15:40:50 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function name ft_putchar_fd
Prototype void ft_putchar_fd(char c, int fd);
Fichiers de rendu -
Paramètres c: Le caractère à écrire.
fd: Le descripteur de fichier sur lequel écrire.
Valeur de retour Aucune
Fonctions externes autorisées
write
Description Écrit le caractère ’c’ sur le descripteur de
fichier donné.*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
