/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:47:32 by htopa             #+#    #+#             */
/*   Updated: 2024/06/24 19:08:43 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*read_buffer(int fd, char *rest_of_line)
{
	char	*buffer;
	int		bytesread;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (ft_free(&rest_of_line));
	bytesread = 1;
	while ((rest_of_line && get_char_index(rest_of_line, '\n') < 0
			&& bytesread > 0) || !rest_of_line)
	{
		bytesread = read(fd, buffer, BUFFER_SIZE);
		if (bytesread < 0)
			return (ft_free(&buffer));
		if (bytesread == 0)
			break ;
		buffer[bytesread] = '\0';
		rest_of_line = ft_strjoin(rest_of_line, buffer);
		if (!rest_of_line)
			return (ft_free(&buffer));
	}
	ft_free(&buffer);
	return (rest_of_line);
}

static char	*get_full_line(char *buffer)
{
	char	*line;
	int		index;

	index = get_char_index(buffer, '\n');
	if (index < 0)
		line = ft_substr(buffer, 0, ft_strlen(buffer));
	else
		line = ft_substr(buffer, 0, index + 1);
	if (!line)
		return (NULL);
	return (line);
}

static char	*get_rest_of_line(char *buffer)
{
	char	*rest_of_line;
	int		index;

	index = get_char_index(buffer, '\n');
	if (index < 0)
	{
		free(buffer);
		return (NULL);
	}
	rest_of_line = ft_substr(buffer, index + 1, ft_strlen(buffer) - index - 1);
	free(buffer);
	return (rest_of_line);
}

char	*get_next_line(int fd)
{
	static char	*rest_of_line[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX || read(fd, 0, 0) < 0)
		return (ft_free(&rest_of_line[fd]));
	rest_of_line[fd] = read_buffer(fd, rest_of_line[fd]);
	if (!rest_of_line[fd])
		return (NULL);
	line = get_full_line(rest_of_line[fd]);
	if (!line)
		return (ft_free(&rest_of_line[fd]));
	rest_of_line[fd] = get_rest_of_line(rest_of_line[fd]);
	return (line);
}
