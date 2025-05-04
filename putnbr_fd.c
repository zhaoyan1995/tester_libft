/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:13:50 by yanzhao           #+#    #+#             */
/*   Updated: 2025/05/02 21:47:29 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char	s[15];

	printf("===ft_putnbr_fd test===\n");
	fd = open("test_putnbr.txt", O_RDWR | O_CREAT);
	memset(s, 0, sizeof(s));
	ft_putnbr_fd(0, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, s, 1);
	if (strcmp(s, "0") == 0)
               printf("test 1: OK\n");
        else
                printf("test 1: NOK\n");
	close(fd);
	unlink("test_putnbr.txt");

	fd = open("test_putnbr.txt", O_RDWR | O_CREAT);
	memset(s, 0, sizeof(s));
	ft_putnbr_fd(9, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, s, 1);
	if (strcmp(s, "9") == 0)
               printf("test 2: OK\n");
        else
                printf("test 2: NOK\n");
	close(fd);
	unlink("test_putnbr.txt");

	fd = open("test_putnbr.txt", O_RDWR | O_CREAT);
	memset(s, 0, sizeof(s));
	ft_putnbr_fd(-8765, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, s, 5);
	if (strcmp(s, "-8765") == 0)
               printf("test 3: OK\n");
        else
                printf("test 3: NOK\n");
	close(fd);
	unlink("test_putnbr.txt");

	fd = open("test_putnbr.txt", O_RDWR | O_CREAT);
	memset(s, 0, sizeof(s));
	ft_putnbr_fd(-2147483648, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, s, 11);
	if (strcmp(s, "-2147483648") == 0)
               printf("test 4: OK\n");
        else
                printf("test 4: NOK\n");
	close(fd);
	unlink("test_putnbr.txt");

	fd = open("test_putnbr.txt", O_RDWR | O_CREAT);
	memset(s, 0, sizeof(s));
	ft_putnbr_fd(2147483647, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, s, 10);    
	if (strcmp(s, "2147483647") == 0)
               printf("test 5: OK\n");
        else
                printf("test 5: NOK\n");
	close(fd);
	unlink("test_putnbr.txt");

	printf("===end ft_putnbr_fd test===\n");
	return (0);
}

