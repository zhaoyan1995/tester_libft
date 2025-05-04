/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 19:54:10 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	cmp_array(int *array, int *array1, size_t size_array)
{
	size_t	i;
	
	i = 0;
	while (i < size_array)
	{
		if (*array != *array1)
			return (*array - *array1);
		array++;
		array1++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	r[10];
	char	result1[10];
	int	array[10];
	int	array1[10];

	printf("===bzero test===\n");
	ft_bzero(r, sizeof(r) - 1);
	bzero(result1, sizeof(result1) - 1);
	if (strcmp(r, result1) == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	ft_bzero(array, sizeof(array));
	bzero(array1, sizeof(array));
	if (cmp_array(array, array1, sizeof(array)/sizeof(int)) == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	printf("===END of bzero test===\n");
	return (0);
}
