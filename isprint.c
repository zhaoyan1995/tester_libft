/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 17:17:22 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	result;

	printf("===ft_isprint test===\n");
	result = ft_isprint(0);
	if (result == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_isprint(127);
	if (result == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	result = ft_isprint(31);
	if (result == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	result = ft_isprint(32);
	if (result == 1)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	result = ft_isprint(126);
	if (result == 1)
		printf("test 5: OK\n");
	else
		printf("test 5: NOK\n");
printf("===End of ft_isprint test===\n");
	return (0);
}
