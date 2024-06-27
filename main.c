/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:01:57 by htopa             #+#    #+#             */
/*   Updated: 2024/06/28 00:48:56 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	char	*line;

	fd = open("file1.txt", O_RDONLY);
	//fd = -2;
	//fd = open("empty_file.txt", O_RDONLY);
	printf("\nAre you line 1?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 2?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 3?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 4?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 5?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 6?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 7?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 8?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 9?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 10?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 11?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 12?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 13?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 14?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	printf("\nAre you line 15?..... ");
	line = get_next_line(fd);
	printf("%s", line);
	free(line);

	close(fd);
	return (0);
}
