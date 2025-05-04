/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:04:56 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 23:38:18 by ZHAOYAN          ###   ########.fr       */
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

	printf("===ft_toupper test===\n");
	result = ft_toupper('a');
	result2 = toupper('a');
	if (result == result2)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_toupper('z');
	result2 = toupper('z');
	if (result == result2)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	result = ft_toupper('A');
	result2 = toupper('A');
	if (result == result2)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	result = ft_toupper('Z');
	result2 = toupper('Z');
	if (result == result2)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	result = ft_toupper('3');
	result2 = toupper('3');
	if (result == result2)
		printf("test 5: OK\n");
	else
		printf("test 5: NOK\n");
	result = ft_toupper(';');
	result2 = toupper(';');
	if (result == result2)
		printf("test 6: OK\n");
	else
		printf("test 6: NOK\n");
	printf("===END of ft_toupper test===\n");
	return (0);
}
