/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:18:59 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 18:10:40 by ZHAOYAN          ###   ########.fr       */
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
	char	s[10];

	printf("===ft_putchar_fd test===\n");
       	fd = open("test_putchar_fd.txt", O_RDWR | O_CREAT);
	memset(s, 0, sizeof(s));
	ft_putchar_fd('a', fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, s, 2);
	printf("strcmp = %d\n", strcmp(s, "a"));
	if (strcmp(s, "a") == 0)
               printf("test 1: OK\n");
        else
                printf("test 1: NOK\n");
	printf("===end ft_putchar_fd test===\n");
	close(fd);
	unlink("test_putchar_fd.txt");
	return (0);
}
