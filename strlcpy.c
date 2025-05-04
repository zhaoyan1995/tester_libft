/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/04/30 13:58:37 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <stdint.h>

int	main(void)
{
	size_t	result;
	char	*str;
	char	*dest;
	char	*dest1;
	char	*dest2;
	char	*dest3;

	str = "Hello!";
	dest = malloc(20);
	if (!dest)
		return (1);
	dest1 = malloc(20);
	if (!dest1)
		return (1);
	dest2 = malloc(20);
	if (!dest2)
		return (1);
	dest3 = malloc(20);
	if (!dest3)
		return (1);
	memset(dest, 0, 20);
	memset(dest1, 0, 20);
	memset(dest2, 0, 20);
	memset(dest3, 0, 20);
	printf("===ft_strlcpy test===\n");
	result = ft_strlcpy(dest, str, 3);
	if (result == strlen(str) && strcmp(dest, "He") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: KO\n");
	result = ft_strlcpy(dest1, str, 6);
	if (result == strlen(str) && strcmp(dest1, "Hello") == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: KO\n");
	result = ft_strlcpy(dest2, str, 15);
	if (result == strlen(str) && strcmp(dest2, str) == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: KO\n");
	result = ft_strlcpy(dest3, str, 0);
	if (result == strlen(str) && strcmp(dest3, "") == 0)
		printf("test 4: OK\n");
	else
		printf("test 4: KO\n");
	printf("===END of ft_strlcpy test===\n");
	free(dest);
	free(dest1);
	free(dest2);
	free(dest3);
	return (0);
}
