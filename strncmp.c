/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:29:07 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 16:02:33 by ZHAOYAN          ###   ########.fr       */
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
	printf("===ft_strncmp test===\n");
	result = ft_strncmp(s1, s2, 2);
	result1 = strncmp(s1, s2, 2);
	if (result == result1)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_strncmp(s1, s2, 3);
	result1 = strncmp(s1, s2, 3);
	if (result == result1)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	printf("===end ft_strncmp test===\n");
	return (0);
}
