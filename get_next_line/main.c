/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:14:19 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/11/14 15:53:02 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd = open("text.txt", O_RDWR);
	//char *s;

	printf("--%s--/", line(fd, 1));
	printf("--%s--/", line(fd, 1));
	printf("--%s--/", line(fd, 1));
	printf("--%s--/", line(fd, 1));
	printf("--%s--/", line(fd, 1));
	printf("--%s--/", line(fd, 1));
	printf("--%s--/", line(fd, 1));
	printf("--%s--/", line(fd, 1));
	printf("--%s--/", line(fd, 1));
	printf("--%s--/", line(fd, 1));
	printf("--%s--/", line(fd, 1));
}
