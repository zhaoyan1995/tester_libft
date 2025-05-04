/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 22:22:23 by ZHAOYAN          ###   ########.fr       */
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
	char	src1[] = "abcdefghi";
	char	dest1[10];
	char	src2[] = "abcdefghi";
	char	dest2[10];
	int	array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	result1[10];
	int	array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	result2[10];

	printf("===ft_memcpy test===\n");
	ft_memcpy(dest1, src1, ft_strlen(src1));
	memcpy(dest2, src2, ft_strlen(src2));
	if (strcmp(dest1, dest2) == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	ft_memcpy(result1, array1, sizeof(array1));
	memcpy(result2, array2, sizeof(array2));
	if (cmp_array(array1, array2, sizeof(array1)/sizeof(int)) == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	printf("===END of ft_memcpy test===\n");
	return (0);
}
