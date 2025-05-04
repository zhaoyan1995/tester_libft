/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/04/30 13:57:49 by yanzhao          ###   ########.fr       */
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
	size_t	i;

	str = "Hello ";
	
	dest = malloc(20);
	if (!dest)
		return (1);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	
	dest1 = malloc(20);
	if (!dest1)
	{
		free(dest1);
		return (1);
	}
	i = 0;
	while (str[i])
	{
		dest1[i] = str[i];
		i++;
	}
	dest1[i] = '\0';

	dest2 = malloc(20);
	if (!dest2)
		return (1);
	i = 0;
	while (str[i])
	{
		dest2[i] = str[i];
		i++;
	}
	dest2[i] = '\0';
	dest3 = malloc(20);
	if (!dest3)
		return (1);
	memset(dest3, '\0', 20);
	printf("===ft_strlcat test===\n");
	result = ft_strlcat(dest, "World", 3);
	if (result == 8 && strcmp(dest, "Hello ") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: KO\n");
	result = ft_strlcat(dest1, "World", 10);
	if (result == 11 && strcmp(dest1, "Hello Wor") == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: KO\n");
	result = ft_strlcat(dest2, "World", 15);
	if (result == 11 && strcmp(dest2, "Hello World") == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: KO\n");
	result = ft_strlcat(dest3, "World", 0);
	if (result == 5 && strcmp(dest3, "") == 0)
		printf("test 4: OK\n");
	else
		printf("test 4: KO\n");
	printf("===END of ft_strlcat test===\n");
	free(dest);
	free(dest1);
	free(dest2);
	free(dest3);
	return (0);
}
