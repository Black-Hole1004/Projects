/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:14:19 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/15 12:35:34 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char c[50];
	fd = open("empty.txt", O_RDWR);
	//*(fd + 1) = open("test.txt", O_RDWR);
	//*(fd + 2) = open("text.txt", O_RDWR);

	//printf("%zd\n", read (fd, c, 1));
	// printf("--%s--/", str);
	// free(str);
	//printf("--%s--/", line(*(fd + 1), 1));
	//printf("--%s--/", line(*(fd + 2), 1));
	printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	//while (1);
}
