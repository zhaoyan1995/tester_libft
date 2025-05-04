/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 18:26:17 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	result;

	printf("===test ft_isalnum===\n");
	result = ft_isalnum('a' - 1);
	if (result == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_isalnum('a');
	if (result == 1)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	result = ft_isalnum('z' + 1);
	if (result == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	result = ft_isalnum('z');
	if (result == 1)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	result = ft_isalnum('A' - 1);
	if (result == 0)
		printf("test 5: OK\n");
	else
		printf("test 5: NOK\n");
	result = ft_isalnum('A');
	if (result == 1)
		printf("test 6: OK\n");
	else
		printf("test 6: NOK\n");
	result = ft_isalnum('Z' + 1);
	if (result == 0)
		printf("test 7: OK\n");
	else
		printf("test 7: NOK\n");
	result = ft_isalnum('Z');
	if (result == 1)
		printf("test 8: OK\n");
	else
		printf("test 8: NOK\n");
	result = ft_isalnum('0' - 1);	
	if (result == 0)
                printf("test 9: OK\n");
        else
                printf("test 9: NOK\n");
	result = ft_isalnum('0');
	if (result == 1)
		printf("test 10: OK\n");
	else
		printf("test 10: NOK\n");
	result = ft_isalnum('9' + 1);
	if (result == 0)
		printf("test 11: OK\n");
	else
		printf("test 11: NOK\n");
	result = ft_isalnum('9');
	if (result == 1)
		printf("test 12: OK\n");
	else
		printf("test 12: NOK\n");	
	printf("===END of test ft_isalnum===\n");
	return (0);
}
