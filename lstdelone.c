/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdelone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/05/03 20:14:27 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	del(void *content)
{
	const char	*green = "\033[32m";
	const char	*red = "\033[31m";
	const char	*reset = "\033[0m";
	
	if (content)
	{
		printf("test 1 : %sOK%s content is freed.\n", green, reset);
		free(content);
		return ;
	}
	printf("test 1 : %sKO%s content is freed.\n", red, reset);
}

int     main(void)
{
	t_list	*result;
	char	*str;
	char	*str2;
	char	*str3;
	const char	*green = "\033[32m";
	const char	*reset = "\033[0m";

	printf("===ft_lstdelone test===\n");
	str = "hello";
	str2 = ft_strdup(str);
	result = ft_lstnew(str2);
	ft_lstdelone(result, &del);
	str3 = ft_strdup(str);
	result = ft_lstnew(str3);
	ft_lstdelone(result, NULL);
	printf("test 2 : %sOK%s !del checked in ft_lstdelone\n", green, reset);
	ft_lstdelone(result, &del);
	ft_lstdelone(NULL, &del);
	printf("test 3 : %sOK%s !lst checked in ft_lstdelone\n", green, reset);
	printf("===end ft_lstdeone test===\n");
	return (0);
}
