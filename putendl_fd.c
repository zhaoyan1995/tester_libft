/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:18:59 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 18:21:13 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	int	fd;
	char	s[100];
	char	*str;

	printf("===ft_putendl_fd test===\n");
       	fd = open("putendl_fd_test.txt", O_RDWR | O_CREAT);
	memset(s, 0, sizeof(s));
	str = "Bonjour tout le monde!";
	ft_putendl_fd(str, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, s, strlen(str) + 1);
	printf("s = %s", s);
	if (strcmp(s, str) == 10)
               printf("test 1: OK\n");
        else
                printf("test 1: NOK\n");
	printf("===end ft_putendl_fd test===\n");
	close(fd);
	unlink("putendl_fd_test.txt");
	return (0);
}
