/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:14:19 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/13 13:50:33 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	int	i;
	char *s;

	i = 0;
	fd = open("text.txt", O_RDONLY);
	s = line(fd, 1);
	while (s)
	{
		printf("%s", s);
		s = line(fd, 1);
	}
	while(1);
	}
