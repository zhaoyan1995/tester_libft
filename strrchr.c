/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:29:07 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/04/30 16:30:35 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*result;

	printf("===ft_strrchr test===\n");
	result = ft_strrchr("HELLO", 'L');
	if (strcmp(result, "LO") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_strrchr("HELLO", 'a');
	if (result == NULL)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	result = ft_strrchr("", 'a');
	if (result == NULL)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	result = ft_strrchr("hello", 0);
	if (strcmp(result, "") == 0)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	printf("===end ft_strrchr test===\n");
	return (0);
}
