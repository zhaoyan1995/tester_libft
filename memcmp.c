/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:29:07 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/28 23:27:48 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int		result;
	int		result1;
	char	*s1;
	char	*s2;

	s1 = "HELLO";
	s2 = "HE";
	printf("===ft_memcmp test===\n");
	result = ft_memcmp(s1, s2, 2);
	result1 = memcmp(s1, s2, 2);
	if (result == result1)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = memcmp(s1, s2, 3);
	result1 = memcmp(s1, s2, 3);
	if (result == result1)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	printf("===end memcmp test===\n");
	return (0);
}
