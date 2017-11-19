/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 01:54:51 by jkrause           #+#    #+#             */
/*   Updated: 2017/07/16 00:02:27 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					main(int argc, char **argv)
{
	char					*file;
	char					*line;
	int						fd;

	(void)argc;
	file = argv[1];
	fd = open(file, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("LINE5: \"%s\"\n", line);
		free(line);
	}
	return (0);
}