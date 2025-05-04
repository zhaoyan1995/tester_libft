/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 23:15:41 by ZHAOYAN          ###   ########.fr       */
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
	char	*dest1;
	char	src2[] = "abcdefghi";
	char	*dest2;
	
	printf("===ft_memchr test===\n");
	dest1 = ft_memchr(src1, 'f', 4);
	dest2 = memchr(src2, 'f', 4);
	if (dest1 == NULL && dest2 == NULL)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	dest1 = ft_memchr(src1, 'f', 6);
	dest2 = memchr(src2, 'f', 6);
	if (strcmp(dest1, dest2) == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	printf("===END of ft_memchr test===\n");
	return (0);
}
