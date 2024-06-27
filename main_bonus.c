/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:14:48 by htopa             #+#    #+#             */
/*   Updated: 2024/06/28 00:49:24 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

int main()
{
	int fd1;
    int fd2;
	int fd3;

    fd1 = open("file1.txt", O_RDONLY);
	fd2 = open("file2.txt", O_RDONLY);	
	fd3 = open("file3.txt", O_RDONLY);	
	char *line;

	printf("\nAre you line 1 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 1 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 1 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 2 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 2 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 2 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 3 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 3 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 3 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 4 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 4 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 4 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 5 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 5 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 5 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 6 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 6 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 6 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 7 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 7 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 7 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 8 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 8 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 8 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 9 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 9 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 9 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 10 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 10 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 10 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 11 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 11 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 11 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 12 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 12 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 12 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 13 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 13 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 13 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 14 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 14 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 14 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	printf("\nAre you line 15 in file 1?..... ");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	printf("\nAre you line 15 in file 2?..... ");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	printf("\nAre you line 15 in file 3?..... ");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);

	close(fd1);
	close(fd2);
	close(fd3);
	return 0;
}