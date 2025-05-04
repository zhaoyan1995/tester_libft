/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 22:49:16 by ZHAOYAN          ###   ########.fr       */
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
	char	src2[] = "abcdefghi";
	int	array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("===ft_memmove test===\n");
	ft_memmove(src1 + 2, src1, 4);
	memmove(src2 + 2, src2, 4);
	if (strcmp(src1, src2) == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	ft_memmove(src1, src1 + 2, 4);
	memmove(src2, src2 + 2, 4);
	if (strcmp(src1, src2) == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	ft_memmove(array1 + 2, array1, sizeof(int) * 4);
	memmove(array2 + 2, array2, sizeof(int) * 4);
	if (cmp_array(array1, array2, sizeof(array1)/sizeof(int)) == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	ft_memmove(array1, array1 + 2, sizeof(int) * 4);
	memmove(array2, array2 + 2, sizeof(int) * 4);
	if (cmp_array(array1, array2, sizeof(array1)/sizeof(int)) == 0)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	printf("===END of ft_memmove test===\n");
	return (0);
}
