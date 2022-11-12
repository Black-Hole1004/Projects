/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:14:19 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/12 20:55:57 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	fd = open("test.txt", O_RDONLY);
	printf("%s", line(fd));
	printf("%s", line(fd));
	printf("%s", line(fd));
	printf("%s", line(fd));
	printf("%s", line(fd));
	printf("%s", line(fd));
	// printf("%s\n", line(fd));
	// printf("%s\n", line(fd));
	// printf("%s\n", line(fd));
	// printf("%s\n", line(fd));
	// printf("%s\n", line(fd));
	// printf("%s\n", line(fd));
}
