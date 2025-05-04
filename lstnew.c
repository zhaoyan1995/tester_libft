/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/30 00:15:39 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
	t_list	*result;
	const char	*green = "\033[32m";
	const char	*red = "\033[31m";
	const char	*reset = "\033[0m";

	printf("===ft_lstnew test===\n");
	result = ft_lstnew("hello");
	if (strcmp(result->content, "hello") == 0 && result->next == NULL)
		printf("test 1: %sOK%s\n", green, reset);
	else
		printf("test 1: %sNOK%s\n", red, reset);
	if (result)
		free(result);
	printf("===end ft_lstnew test===\n");
	return (0);
}
