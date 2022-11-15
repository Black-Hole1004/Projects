/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:14:19 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/15 18:59:35 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

// static int hello(void)
// {
// 	printf("hello");
// }

int	main(void)
{
	// static char fd1;
	// static char fd2;
	 int		fd;
	//char	c[50];

	fd = open("func.txt", O_RDWR);
	/**(fd + 1) = open("test.txt", O_RDWR);
	*(fd + 2) = open("text.txt", O_RDWR);
	printf("%zd\n", read (fd, c, 1));
	char *str = get_next_line(fd);
	printf("--%s--/", str);
	free(str);
	printf("--%s--/", line(*(fd + 1), 1));
	printf("--%s--/", line(*(fd + 2), 1));*/
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("--%s--/", get_next_line(fd));
	// printf("%p\n%p\n%p\n", &fd, &fd1, &fd2);
	// printf("%p\n", &hello);
	char *ptr;
	while (ptr)
	{
		ptr = get_next_line(fd);
		printf("%s\n", ptr);
	}
	//printf("%s\n", get_next_line(fd));
}

