/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/04/01 18:24:55 by ZHAOYAN          ###   ########.fr       */
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

void	*double_content(void *content)
{
	int	*result;

	result = malloc(sizeof(int));
	if (!result)
		return (NULL);
	*result = *(int *)content * 2;
	return (result);
}

void	del(void *content)
{
	if (content)
		free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("content = %d\n", *(int *)(lst->content));
		lst = lst->next;
	}
}

int     main(void)
{
	//const char	*green = "\033[32m";
	//const char	*red = "\033[31m";
	//const char	*reset = "\033[0m";
	t_list	*head;
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*new;
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
	printf("===ft_lstmap test===\n");
	new = ft_lstmap(head, &double_content, &del);
	print_list(new);
	free_linked_list(head);
	ft_lstclear(&new, &del);
	printf("===end ft_lstmap test===\n");
	return (0);
}
