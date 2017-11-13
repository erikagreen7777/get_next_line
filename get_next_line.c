/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:39:16 by egreen            #+#    #+#             */
/*   Updated: 2017/11/13 15:20:06 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		buffcat(const int fd, char **temp)
{
	char		buffer[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		tmp = *temp;
		*temp = ft_strfjoin(tmp, buffer);
	}
	return (ret);
}

int				get_next_line(const int fd, char **line)
{
	static char	*temp[BUFF_SIZE];
	char		*nl;
	int			read;

	if (fd < 0 || line == NULL || fd > 4999)
		return (-1);
	if (!temp[fd])
		temp[fd] = ft_strnew(0);
	while ((nl = ft_strchr(temp[fd], '\n')) == NULL)
	{
		if ((read = buffcat(fd, &temp[fd])) < 0)
			return (-1);
		if (read == 0 && !nl)
		{
			if (!(temp[fd][0]))
				return (0);
			*line = temp[fd];
			temp[fd] = NULL;
			return (1);
		}
	}
	*line = ft_strsub(temp[fd], 0, nl - temp[fd]);
	if (temp[fd])
		free(temp[fd]);
	return ((temp[fd] = ft_strdup(nl + 1)) ? 1 : 1);
}
