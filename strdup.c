/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 16:00:05 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <malloc.h>

int	main(void)
{
	char	*str1;
	char	*str2;

	printf("===ft_strdup test===\n");
	str1 = ft_strdup("Hello World");
	str2 = strdup("Hello World");
	if (strcmp(str1, str2) == 0 && malloc_usable_size(str1) == malloc_usable_size(str2))
	{
		printf("test 1: OK\n");
		free(str1);
		free(str2);
	}
	else
	{
		printf("test 1: NOK\n");
		free(str2);
	}
	str1 = ft_strdup("");
	str2 = strdup("");
	if (strcmp(str1, str2) == 0 && malloc_usable_size(str1) == malloc_usable_size(str2))
	{
		printf("test 2: OK\n");
		free(str1);
		free(str2);
	}
	else
	{
		printf("test 2: NOK\n");
		free(str2);
	}
	printf("===END of ft_strdup test===\n");
	return (0);
}
