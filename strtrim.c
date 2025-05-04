/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/05/01 17:52:04 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
	char	*result;

	printf("===ft_strtrim test===\n");
	result = ft_strtrim("****+HELLO+*****", "+*");
	if (strcmp(result, "HELLO") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	if (result)
		free(result);
	result = ft_strtrim("*+*+*+*+", "+*");
	if (strcmp(result, "") == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	if (result)
		free(result);
	result = ft_strtrim("A+****", "+*");
	if (strcmp(result, "A") == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	if (result)
		free(result);
	result = ft_strtrim("", "");
	if (strcmp(result, "") == 0)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	if (result)
		free(result);
	result = ft_strtrim("hello", "+*");
	if (strcmp(result, "hello") == 0)
		printf("test 5: OK\n");
	else
		printf("test 5: NOK\n");
	if (result)
		free(result);
	printf("===end ft_strtrim test===\n");
	return (0);
}
