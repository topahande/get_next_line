/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:01:57 by htopa             #+#    #+#             */
/*   Updated: 2024/06/25 13:19:39 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	char	*line;

	fd = open("file1.txt", O_RDONLY); // "test2.txt"
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	//printf("\n%d\n", fd);
	close(fd);
	return (0);
}
