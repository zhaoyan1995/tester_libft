/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:29:07 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/04/30 14:18:59 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*result;

	printf("===ft_strchr test===\n");
	result = ft_strchr("HELLO", 'L');
	if (strcmp(result, "LLO") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	result = ft_strchr("HELLO", 'a');
	if (result == NULL)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	result = ft_strchr("", 'a');
	if (result == NULL)
		printf("test 3: OK\n");
	else
		printf("test 3: NOK\n");
	result = ft_strchr("hello", 0);
	if (strcmp(result, "") == 0)
		printf("test 4: OK\n");
	else
		printf("test 4: NOK\n");
	printf("===end ft_strchr test===\n");
	return (0);
}
