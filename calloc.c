/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 15:29:17 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int	main(void)
{
	void	*ptr = ft_calloc(4, sizeof(char));
	char	e[] = {0, 0, 0, 0};

	printf("===ft_calloc test===\n");
	if (memcmp(ptr, e, 4) == 0)
	{
		printf("test 1: OK\n");
		free(ptr);
	}
	else
		printf("test 1: NOK\n");
	if (ft_calloc(SIZE_MAX, SIZE_MAX) == NULL)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	if (ft_calloc(INT_MAX, INT_MAX) == NULL)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	if (ft_calloc(INT_MIN, INT_MIN) == NULL)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	ptr = ft_calloc(0, 0);
	if (ptr != NULL)
	{
		printf("test 5: OK\n");
		free(ptr);
	}
	else
		printf("test 5: NOK\n");
	ptr = ft_calloc(0, 5);
	if (ptr != NULL)
	{
		printf("test 6: OK\n");
		free(ptr);
	}
	else
		printf("test 6: NOK\n");
	ptr = ft_calloc(5, 0);
	if (ptr != NULL)
	{
		printf("test 7: OK\n");
		free(ptr);
	}
	else
		printf("test 7: NOK\n");
	ptr = ft_calloc(-5, -5);
	if (ptr == NULL)
		printf("test 8: OK\n");
	else
	{
		printf("test 8: NOK\n");
		free(ptr);
	}
	ptr = ft_calloc(0, -5);	
	if (ptr != NULL)
	{
		printf("test 9: OK\n");
		free(ptr);
	}
	else
		printf("test 9: OK\n");
	ptr = ft_calloc(-5, 0);
	if (ptr != NULL)
	{
		printf("test 10: OK\n");
		free(ptr);
	}
	else
		printf("test 10: OK\n");
	ptr = ft_calloc(3, -5);
	if (ptr == NULL)
		printf("test 11: OK\n");
	else
	{
		printf("test 11: NOK\n");
		free(ptr);
	}
	ptr = ft_calloc(-5, 3);
	if (ptr == NULL)
		printf("test 12: OK\n");
	else
	{
		printf("test 12: NOK\n");
		free(ptr);
	}
	printf("===END of ft_calloc test===\n");
	return (0);
}
