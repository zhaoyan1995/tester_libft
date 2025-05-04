/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/05/03 19:16:47 by yanzhao          ###   ########.fr       */
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

void    print_list(t_list *head)
{
	while(head)
	{
		printf("content = %d\n", *(int *)(head->content));
		head = head->next;
	}
}

int     main(void)
{
	const char	*green = "\033[32m";
	const char	*red = "\033[31m";
	const char	*reset = "\033[0m";
	t_list	*head;
	t_list	**head2;
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*a1;
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
	print_list(head);
	printf("===ft_lstadd_back test===\n");
	if (*(int *)head->content == a && *(int *)head->next->content == b && *(int *)head->next->next->content == c && head->next->next->next == NULL)
		printf("test 1: %sOK%s\n", green, reset);
	else
		printf("test 1: %sNOK%s\n", red, reset);
	free_linked_list(head);
	
	head2 = NULL;
	a1 = ft_lstnew(&a);
	ft_lstadd_back(head2, a1);
	if (head2 == NULL)
		printf("test 2: %sOK%s\n", green, reset);
	else
		printf("test 2: %sNOK%s\n", red, reset);
	free(a1);
	new = NULL;
	head = NULL;
	ft_lstadd_back(&head, new);
	if (head == NULL)
		printf("test 3: %sOK%s\n", green, reset);
	else
		printf("test 3: %sNOK%s\n", red, reset);
	head = ft_lstnew(&a);
	new = NULL;
	ft_lstadd_back(&head, new);
	if (*(int *)head->content == a && head->next == NULL)
		printf("test 4: %sOK%s\n", green, reset);
	else
		printf("test 4: %sNOK%s\n", red, reset);
	free_linked_list(head);
}
