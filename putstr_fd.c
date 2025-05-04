/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:18:59 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 18:30:15 by ZHAOYAN          ###   ########.fr       */
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

	printf("===ft_putstr_fd test===\n");
       	fd = open("putchar_fd_test.txt", O_RDWR | O_CREAT);
	memset(s, 0, sizeof(s));
	str = "Bonjour tout le monde!";
	ft_putstr_fd(str, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, s, strlen(str) + 1);
	if (strcmp(s, str) == 0)
               printf("test 1: OK\n");
        else
                printf("test 1: NOK\n");
	printf("===end ft_putstr_fd test===\n");
	close(fd);
	unlink("putchar_fd_test.txt");
	return (0);
}
