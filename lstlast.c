/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/30 23:04:07 by ZHAOYAN          ###   ########.fr       */
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
//	ft_lstadd_back(&head, first);
//	ft_lstadd_back(&head, second);
//	ft_lstadd_back(&head, third);
	print_list(head);
	printf("===ft_lstlast test===\n");
	ft_lstadd_back(&head, first);
	if (*(int *)ft_lstlast(head)->content == 10 && ft_lstlast(head)->next == NULL)
		printf("test 1: %sOK%s\n", green, reset);
	else
		printf("test 1: %sNOK%s\n", red, reset);
	ft_lstadd_back(&head, second);
	if (*(int *)ft_lstlast(head)->content == 20 && ft_lstlast(head)->next == NULL)
		printf("test 2: %sOK%s\n", green, reset);
	else
		printf("test 2: %sNOK%s\n", red, reset);
	ft_lstadd_back(&head, third);
	if (*(int *)ft_lstlast(head)->content == 30 && ft_lstlast(head)->next == NULL)
		printf("test 3: %sOK%s\n", green, reset);
	else
		printf("test 3: %sNOK%s\n", red, reset);


	
	
	
	free_linked_list(head);
	printf("===end ft_lstlast test===\n");
	return (0);
}
