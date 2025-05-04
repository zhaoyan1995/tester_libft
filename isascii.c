/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 17:09:58 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	result;

	printf("===ft_isascii test===\n");
	result = ft_isascii(0);
	if (result == 1)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_isascii(127);
	if (result == 1)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	result = ft_isascii(0 - 1);
	if (result == 0)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	result = ft_isascii(127 + 1);
	if (result == 0)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	printf("===End of ft_isascii test===\n");
	return (0);
}
