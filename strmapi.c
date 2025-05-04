/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:25:59 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 17:27:12 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	applyf(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	char	*result;

	printf("===ft_strmapi test===\n");
	result = ft_strmapi("ABCDEF", &applyf);
	if (strcmp(result, "ACEGIK") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	if (result)
		free(result);
	result = ft_strmapi("", &applyf);
	if (strcmp(result, "") == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	if (result)
		free(result);
	printf("===end ft_strmapi test===\n");
	return (0);
}
