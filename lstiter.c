/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/04/01 16:16:40 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	free_linked_list(t_list *head)
{
	t_list	*next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

void    print_content(void *content)
{	
	static	int	i = 1;
	const char	*green = "\033[32m";
	const char	*red = "\033[31m";
	const char	*reset = "\033[0m";

	if (content)
	{
		printf("content = %d test %d %sOK%s\n", *(int *)(content), i, green, reset);
	}
	else
		printf("test %d %sKO%s\n", i, red, reset);
	i++;
}

int     main(void)
{
	t_list	*head;
	t_list	*first;
	t_list	*second;
	t_list	*third;
	int	a;
	int	b;
	int	c;
	
	head = NULL;
	a = 10;
	b = 20;
	c = 30;
	first = ft_lstnew(&a);
	second = ft_lstnew(&b);
	third = ft_lstnew(&c);
	ft_lstadd_back(&head, first);
	ft_lstadd_back(&head, second);
	ft_lstadd_back(&head, third);
	printf("===ft_lstiter test===\n");
	ft_lstiter(head, &print_content);
	free_linked_list(head);
	printf("===end ft_lstiter test===\n");
	return (0);
}
