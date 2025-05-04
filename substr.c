/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/05/01 12:16:15 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
	char	*result;

	printf("===ft_substr test===\n");
	result = ft_substr("HELLO", 2, 3);
	if (strcmp(result, "LLO") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	if (result)
		free(result);
	result = ft_substr("HELLO", 7, 2);
	if (strcmp(result, "") == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	if (result)
		free(result);
	result = ft_substr("HELLO", 2, 10);
	if (strcmp(result, "LLO") == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	if (result)
		free(result);
	result = ft_substr(NULL, 2, 10);
	if (result == NULL)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	if (result)
		free(result);
	printf("===end ft_substr test===\n");
	return (0);
}
