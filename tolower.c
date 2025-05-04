/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 23:41:11 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	result;
	int	result2;

	printf("===ft_tolower test===\n");
	result = ft_tolower('a');
	result2 = tolower('a');
	if (result == result2)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_tolower('z');
	result2 = tolower('z');
	if (result == result2)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	result = ft_tolower('A');
	result2 = tolower('A');
	if (result == result2)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	result = ft_tolower('Z');
	result2 = tolower('Z');
	if (result == result2)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	result = ft_tolower('3');
	result2 = tolower('3');
	if (result == result2)
		printf("test 5: OK\n");
	else
		printf("test 5: NOK\n");
	result = ft_tolower(';');
	result2 = tolower(';');
	if (result == result2)
		printf("test 6: OK\n");
	else
		printf("test 6: NOK\n");
	printf("===END of ft_tolower test===\n");
	return (0);
}
