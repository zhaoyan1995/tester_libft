/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/05/03 20:57:03 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	del(void *content)
{
        const char      *green = "\033[32m";
        const char      *red = "\033[31m";
        const char      *reset = "\033[0m";
	static	int	i = 1;

        if (content)
        {
                printf("test %d : %sOK%s content is freed.\n", i, green, reset);
                free(content);
        }
	else
        	printf("test %d : %sKO%s content is freed.\n", i, red, reset);
	i++;
}


int     main(void)
{
	t_list	*head;
	const char	*green = "\033[32m";
	const char	*red = "\033[31m";
	const char	*reset = "\033[0m";
	int	*c;
	int	*b;
	int	*a;

	head = NULL;
	c = malloc(sizeof(int));
	b = malloc(sizeof(int));
	a = malloc(sizeof(int));
	*c = 30;
	*b = 20;
	*a = 10;
	ft_lstadd_front(&head, ft_lstnew(c));
	ft_lstadd_front(&head, ft_lstnew(b));
	ft_lstadd_front(&head, ft_lstnew(a));
	if (head)
		printf("head is not NULL before lstclear!\n");
	printf("===ft_lstclear test===\n");
	ft_lstclear(&head, &del);
	if (!head)
		printf("%shead is NULL now!%s\n", green, reset);
	else
		printf("%shead is NOT NULL now!%s\n", red, reset);
	ft_lstclear(&head, &del);
	ft_lstclear(&head, NULL);
	ft_lstclear(NULL, &del);
	printf("===end ft_lstclear test===\n");
	return (0);
}
