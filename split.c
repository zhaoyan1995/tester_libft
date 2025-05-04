/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 17:05:06 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
	char	**result;

	printf("===ft_split test===\n");
	result = ft_split(" Hello World   ", ' ');
	if (strcmp(result[0], "Hello") == 0 && strcmp(result[1], "World") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	if (result)
	{
		free(result[0]);
		free(result[1]);
		free(result);
	}
	result = ft_split(" Hello World   ", '+');
	if (strcmp(result[0], " Hello World   ") == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	if (result)
	{
		free(result[0]);
		free(result);
	}
	result = ft_split("    ", ' ');
	if (result[0] == NULL)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	if (result)
	{
		free(result[0]);
		free(result);
	}
	printf("===end ft_split test===\n");
	return (0);
}
