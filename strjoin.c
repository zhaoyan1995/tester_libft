/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 16:39:21 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
	char	*result;

	printf("===ft_strjoin test===\n");
	result = ft_strjoin("HELLO ", "World");
	if (strcmp(result, "HELLO World") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	if (result)
		free(result);
	result = ft_strjoin("", "World");
	if (strcmp(result, "World") == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	if (result)
		free(result);
	result = ft_strjoin("HELLO", "");
	if (strcmp(result, "HELLO") == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	if (result)
		free(result);
	result = ft_strjoin("", "");
	if (strcmp(result, "") == 0)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	if (result)
		free(result);
	printf("===end ft_strjoin test===\n");
	return (0);
}
