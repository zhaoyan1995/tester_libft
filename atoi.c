/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:29:07 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 16:19:00 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		result;
	int		result1;

	printf("===ft_atoi test===\n");
	result = ft_atoi("324");
	result1 = atoi("324");
	if (result == result1)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_atoi("0");
	result1 = atoi("0");
	if (result == result1)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	result = ft_atoi("-4");
	result1 = atoi("-4");
	if (result == result1)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	result = ft_atoi("6");
	result1 = atoi("6");
	if (result == result1)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	result = ft_atoi("2147483647");
	result1 = atoi("2147483647");
	if (result == result1)
		printf("test 5: OK\n");
	else
		printf("test 5: NOK\n");
	result = ft_atoi("-2147483648");
	result1 = atoi("-2147483648");
	if (result == result1)
		printf("test 6: OK\n");
	else
		printf("test 6: NOK\n");
	result = ft_atoi("	-4i32");
	result1 = atoi("	-4i32");
	if (result == result1)
		printf("test 7: OK\n");
	else
		printf("test 7: NOK\n");
	printf("===end ft_atoi test===\n");
	return (0);
}
