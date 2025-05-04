/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 17:21:48 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <stdint.h>

int	main(void)
{
	size_t	result;
	size_t	result1;

	printf("===ft_strlen test===\n");
	result = ft_strlen("");
	result1 = strlen("");
	if (result == result1)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_strlen("Hello");
	result1 = strlen("Hello");
	if (result == result1)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	printf("===END of ft_strlen test===\n");
	return (0);
}
