/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:29:07 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/05/05 13:03:45 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*result;

	printf("===ft_itoa test===\n");
	result = ft_itoa(-324);
	if (strcmp(result, "-324") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	if (result)
		free(result);
	result = ft_itoa(-0);
	if (strcmp(result, "0") == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	if (result)
		free(result);
	result = ft_itoa(-4);
	if (strcmp(result, "-4") == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	if (result)
		free(result);
	result = ft_itoa(64);
	if (strcmp(result, "64") == 0)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	if (result)
		free(result);
	result = ft_itoa(2147483647);
	if (strcmp(result, "2147483647") == 0)
		printf("test 5: OK\n");
	else
		printf("test 5: NOK\n");
	if (result)
		free(result);
	result = ft_itoa(-2147483648);
	if (strcmp(result, "-2147483648") == 0)
		printf("test 6: OK\n");
	else
		printf("test 6: NOK\n");
	if (result)
		free(result);
	printf("===end ft_itoa test===\n");
	return (0);
}
