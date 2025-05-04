/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 17:02:42 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	result;

	printf("===ft_isalpha test===\n");
	result = ft_isalpha('a' - 1);
	if (result == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_isalpha('a');
	if (result == 1)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	result = ft_isalpha('z' + 1);
	if (result == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	result = ft_isalpha('z');
	if (result == 1)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	result = ft_isalpha('A' - 1);
	if (result == 0)
		printf("test 5: OK\n");
	else
		printf("test 5: NOK\n");
	result = ft_isalpha('A');
	if (result == 1)
		printf("test 6: OK\n");
	else
		printf("test 6: NOK\n");
	result = ft_isalpha('Z' + 1);
	if (result == 0)
		printf("test 7: OK\n");
	else
		printf("test 7: NOK\n");
	result = ft_isalpha('Z');
	if (result == 1)
		printf("test 8: OK\n");
	else
		printf("test 8: NOK\n");
	printf("===End of ft_isalpha test===\n");
	return (0);
}
