/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 16:23:18 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int     main(void)
{
	char	*result;

	printf("===ft_strnstr test===\n");
	result = ft_strnstr("HELLO", "EL", 4);
	if (strcmp(result, "ELLO") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_strnstr("HELLO", "EL", 2);
	if (result == NULL)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	result = ft_strnstr("HELLO", "", 5);
	if (strcmp(result, "HELLO") == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	printf("===end ft_strnstr test===\n");
	return (0);
}
